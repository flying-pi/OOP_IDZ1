//
// Created by Yura Braiko on 17.11.16.
//

#include "LOGIKA.h"
#include "Task.h"
#include "OutPrinter.h"

void LOGIKA::runLoop() {
    taskType task;
    PrintBuilder *builder = new PrintBuilder();
    ITask *currentTask;
    builder->addConsolePrinter()->addFilePrinter();
    showInstruction();
    while ((task = getNextTaskType()) != eExit) {
        if(currentTask = getTaskByType(task)) {
            currentTask->calculate(builder);
            delete currentTask;
        }
    }
    delete builder;
}
