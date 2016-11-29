//
// Created by Yura Braiko on 17.11.16.
//
#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <stdio.h>
#include <locale>

void otvet(const char[], const unsigned int, const unsigned int, const unsigned int = 0);

void instruction();


int main() {
    setlocale(LC_ALL, ".1251");
    char and[10] = "\nAND     ";
    char or[10] = "\nOR      ";
    char xor[10] = "\nXOR     ";
    char shl[10] = "\n<<      ";
    char shr[10] = "\n>>      ";
    char inv[10] = "INV      ";
    unsigned int operation, V1, V2, V3;
    instruction();
    for(;;){
        printf("\n\nОперация? ");
        scanf("%hu",&operation);
        switch (operation){
            case 1:                 
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u",&V1,&V2);
                V3 = V1&V2;
                otvet(and,V3,V1,V2);
                break;
            case 2:                 
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u",&V1,&V2);
                V3 = V1|V2;
                otvet(or,V3,V1,V2);
                break;
            case 3:                 
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u",&V1,&V2);
                V3 = V1^V2;
                otvet(xor,V3,V1,V2);
                break;
            case 4:                 
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u",&V1,&V2);
                V3 = V1<<V2;
                otvet(shl,V3,V1,V2);
                break;
            case 5:                 
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u",&V1,&V2);
                V3 = V1>>V2;
                otvet(shr,V3,V1,V2);
                break;
            case 6:                 
                printf("Введите один операнд из [0,4294967295]: ");
                scanf("%u",&V1);
                V3 = ~V1;
                otvet(inv,V3,V1,V2);
                break;
            default:
                if(operation!=7)
                    printf("Введеное число, не соответсвует пункту меню.");

        }
        if(operation==7)
            break;
    }
    return 0;
}