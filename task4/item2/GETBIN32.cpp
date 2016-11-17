//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>

void getbin(const unsigned int *inputN){
    unsigned int n = *inputN;
    for(int i=0;i<32;i++){
        if(n&0x80000000)
            putc('1',stdout);
        else
            putc('0',stdout);
        n=n<<1;
    }
}