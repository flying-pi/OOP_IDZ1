//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>
#include <string>

void getbin(unsigned short);

//коректный способ задания табуляции  - непечатные символы оформлять в виде их значений в юникоде..

// для того что б учесть что эта функция может работать с логичискими унарными логичискими операциями
// следовало написать дополнительну функцию,  принимающая только 1 аргумент. В данном случае функция
// связана с именованием логичиской операции(в реальной жизни может быть заменена например на 1 символ)

//название аргументов функции не выражают их суть, нечитабельно
void otvet(const char *str,
           const unsigned short &val3,
           const unsigned short &val1,
           const unsigned short &val2) {
    char *tempstr = "INV      ";
    printf("ОТВЕТ:\n");
    if (strcmp(str, tempstr) != 0) {
        printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%5hu 0x%04x ", val1, val1);
        getbin(val1);
        printf("%s%5hu 0x%04x ", str, val2, val2);
        getbin(val2);
        printf("\n===================================\n");
        printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%5hu 0x%04x ", val3, val3);
        getbin(val3);
    } else {
        printf("%s%5hu 0x%04x ", str, val1, val1);
        getbin(val1);
        printf("\n===================================\n");
        printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%5hu 0x%04x ", val3, val3);
        getbin(val3);
    }
}