//
// Created by Yura Braiko on 17.11.16.
//
#define _CRT_SECURE_NO_DEPRECATE

#include <clocale>
#include "LOGIKA.h"

int main() {
    setlocale(LC_ALL, ".1251");
    LOGIKA l;
    l.runLoop();
    return 0;
}