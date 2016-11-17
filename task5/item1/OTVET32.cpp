//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>
#include <string>

void getbin(unsigned int);

void otvet(const char str[],
           const unsigned int val3,
           const unsigned int val1,
           const unsigned int val2) {
    char *tempstr = "INV      ";
    printf("ОТВЕТ:\n");
    if (strcmp(str, tempstr) != 0) {
        printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", val1, val1);
        getbin(val1);
        printf("%s%10u 0x%08x ", str, val2, val2);
        getbin(val2);
        printf("\n===================================\n");
        printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", val3, val3);
        getbin(val3);
    } else {
        printf("%s%10u 0x%08x ", str, val1, val1);
        getbin(val1);
        printf("\n===================================\n");
        printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", val3, val3);
        getbin(val3);
    }
}