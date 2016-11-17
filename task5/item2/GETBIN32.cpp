//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>

void getbin(unsigned int n) {
    unsigned int mask = 0x80000000;
    while (mask!=0){
        putc((n & mask) == 0 ?'0':'1', stdout);
        mask = mask >> 1;
    }
}