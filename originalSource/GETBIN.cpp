//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>

//префикс get предполагает что функция возвращает значения.
//такая форма записи является функцией с неявным побочным эффектом
void getbin(unsigned short n){
    for(int i=0;i<16;i++){
        if(n&0x8000)
            putc('1',stdout);
        else
            putc('0',stdout);
        n=n<<1;
    }
}