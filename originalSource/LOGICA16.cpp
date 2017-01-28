//
// Created by Yura Braiko on 17.11.16.
//
#define _CRT_SECURE_NO_DEPRECATE

#include <iostream>
#include <stdio.h>
#include <locale>

void otvet(const char *, const unsigned short &, const unsigned short &, const unsigned short & = 0);

void instruction();


int main() {
    setlocale(LC_ALL, ".1251");
    //согласно стандарту and, or и xor являються ключевыми словами.
    // Что бы отключить нужно собирать программу с флагом -fno-operator-names
    char and[10] = "\nAND     ";
    char or[10] = "\nOR      ";
    char xor[10] = "\nXOR     ";
    char shl[10] = "\n<<      ";
    char shr[10] = "\n>>      ";
    char inv[10] = "INV      ";
    unsigned short operation, V1, V2, V3;
    instruction();
    do{
        printf("\n\nОперация? ");
        scanf("%hu",&operation);
        //дублирование кода в ветках свитча..
        switch (operation){
            case 1:                 //магичиское число???
                printf("Введите два операнда из [0,65535]: ");
                //использования функции специфичной для реализации от Microsoft
                //не понятно почему используется "небезопасный" printf
                scanf("%hu%hu",&V1,&V2);
                V3 = V1&V2;
                otvet(and,V3,V1,V2);
                break;
            case 2:                 //магичиское число???
                printf("Введите два операнда из [0,65535]: ");
                scanf("%hu%hu",&V1,&V2);
                V3 = V1|V2;
                otvet(or,V3,V1,V2);
                break;
            case 3:                 //магичиское число???
                printf("Введите два операнда из [0,65535]: ");
                scanf("%hu%hu",&V1,&V2);
                V3 = V1^V2;
                otvet(xor,V3,V1,V2);
                break;
            case 4:                 //магичиское число???
                printf("Введите два операнда из [0,65535]: ");
                scanf("%hu%hu",&V1,&V2);
                V3 = V1<<V2;
                otvet(shl,V3,V1,V2);
                break;
            case 5:                 //магичиское число???
                printf("Введите два операнда из [0,65535]: ");
                scanf("%hu%hu",&V1,&V2);
                V3 = V1>>V2;
                otvet(shr,V3,V1,V2);
                break;
            case 6:                 //магичиское число???
                printf("Введите один операнд из [0,65535]: ");
                scanf("%hu",&V1);
                V3 = ~V1;
                otvet(inv,V3,V1,V2);
                break;
            default:
                if(operation!=7)
                    printf("Введеное число, не соответсвует пункту меню.");

        }
    }while (operation!=7);
    return 0;
}