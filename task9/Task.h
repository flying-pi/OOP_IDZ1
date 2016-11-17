//
// Created by Yura Braiko on 17.11.16.
//

#ifndef IDZ1_TASK_H
#define IDZ1_TASK_H

#include <iostream>
#include "OutPrinter.h"
#include <functional>

using namespace std;

enum taskType{
    eAnd,eOr,eXor,eLeftShift,eRightShift,eInversion,eExit,eUnknown
};

class ITask;

ITask *getTaskByType(taskType type);

void showInstruction();

taskType getNextTaskType();


class ITask {
public:
virtual void calculate(IPrinter *printer) =0;

protected:

    void procces2ArgTask(function<void (unsigned int ,unsigned int )> foo);

    void procces1ArgTask(function<void (unsigned int)> foo);
};


#endif //IDZ1_TASK_H
