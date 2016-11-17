//
// Created by Yura Braiko on 17.11.16.
//

#include "Task.h"

char and[10] = "\nAND     ";
char or[10] = "\nOR      ";
char xor[10] = "\nXOR     ";
char shl[10] = "\n<<      ";
char shr[10] = "\n>>      ";
char inv[10] = "INV      ";

class AndTask : public ITask {
public:
    virtual void calculate(IPrinter *printer) override {
        return procces2ArgTask(
                [printer](unsigned int V1, unsigned int V2) {
                    printer->printResult( and , V1 & V2, V1, V2);
                    return;
                });
    }
};

class OrTask : public ITask {
public:
    virtual void calculate(IPrinter *printer) override {
        return procces2ArgTask(
                [printer](unsigned int V1, unsigned int V2) { printer->printResult( or , V1 | V2, V1, V2); });
    }
};

class XorTask : public ITask {
public:
    virtual void calculate(IPrinter *printer) override {
        return procces2ArgTask(
                [printer](unsigned int V1, unsigned int V2) { printer->printResult(xor, V1 ^ V2, V1, V2); });
    }
};

class LeftShiftTask : public ITask {
public:
    virtual void calculate(IPrinter *printer) override {
        return procces2ArgTask(
                [printer](unsigned int V1, unsigned int V2) { printer->printResult(shl, V1 << V2, V1, V2); });
    }
};

class RightShiftTask : public ITask {
public:
    virtual void calculate(IPrinter *printer) override {
        return procces2ArgTask(
                [printer](unsigned int V1, unsigned int V2) { printer->printResult(shr, V1 >> V2, V1, V2); });
    }
};

class InversionTask : public ITask {
public:
    virtual void calculate(IPrinter *printer) override {
        return procces1ArgTask([printer](unsigned int V1) { printer->printResult(shr, ~V1, V1, 0); });
    }
};

ITask *getTaskByType(taskType type) {
    switch (type) {
        case eAnd:
            return new AndTask();
        case eOr:
            return new OrTask();
        case eXor:
            return new XorTask();
        case eLeftShift:
            return new LeftShiftTask();
        case eRightShift:
            return new RightShiftTask();
        case eInversion:
            return new InversionTask();
        default:
            return nullptr;
    }
}

void showInstruction() {
    printf("ТЕСТИРОВАНИЕ ПОРАЗР.ЛОГИЧИСКИХ ОПЕРАЦИЙ\n"
                   "\u00201-выполнение операции И (&)\n"
                   "\u00202-выполнение операции ИЛИ (|)\n"
                   "\u00203-выполнение операции ИСКЛ.ИЛИ (^)\n"
                   "\u00204-выполнение операции ЛОГ.СДВИГ ВЛЕВО (<<)\n"
                   "\u00205-выполнение операции ЛОГ.СДВИГ ВПРАВО (>>)\n"
                   "\u00206-выполнение операции ИНВЕРСИИ (~)\n"
                   "\u00207-завершить выполнение программы");
}

taskType getNextTaskType() {
    short type;
    cout << "\n\nОперация? ";
    cin >> type;
    switch (type) {
        case 1:
            return eAnd;
        case 2:
            return eOr;
        case 3:
            return eXor;
        case 4:
            return eLeftShift;
        case 5:
            return eRightShift;
        case 6:
            return eInversion;
        case 7:
            return eExit;
        default:
            return eUnknown;

    }
}


void ITask::procces2ArgTask(function<void(unsigned int, unsigned int)> foo) {
    cout << "Введите два операнда из [0,4294967295]: ";
    unsigned int V1, V2;
    cin >> V1 >> V2;
    foo(V1, V2);

}

void ITask::procces1ArgTask(function<void(unsigned int)> foo) {
    cout << "Введите один операнд из [0,4294967295]: ";
    unsigned int V1;
    cin >> V1;
    foo(V1);
}
