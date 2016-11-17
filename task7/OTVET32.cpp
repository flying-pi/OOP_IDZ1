//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>
#include <string>
#include <cstdlib>

void getbin(unsigned int,char *out);

void otvet(const char *str,
           const unsigned int &val3,
           const unsigned int &val1,
           const unsigned int &val2) {
    char *tempstr = "INV      ";
    FILE *f;
    f = fopen("./out.txt", "a");
    char *binaryValue = new char[32];
    if (f == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }
    fprintf(f,"ОТВЕТ:\n");
    if (strcmp(str, tempstr) != 0) {
        fprintf(f,"\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", val1, val1);
        getbin(val1,binaryValue);
        fprintf(f,binaryValue);
        fprintf(f,"%s%10u 0x%08x ", str, val2, val2);
        getbin(val2,binaryValue);
        fprintf(f,binaryValue);
        fprintf(f,"\n===================================\n");
        fprintf(f,"\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", val3, val3);
        getbin(val3,binaryValue);
        fprintf(f,binaryValue);
    } else {
        fprintf(f,"%s%10u 0x%08x ", str, val1, val1);
        getbin(val1,binaryValue);
        fprintf(f,binaryValue);
        fprintf(f,"\n===================================\n");
        fprintf(f,"\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", val3, val3);
        getbin(val3,binaryValue);
        fprintf(f,binaryValue);
    }
    fprintf(f,"\n");
    fclose(f);
    delete[] binaryValue;
}