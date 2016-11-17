//
// Created by Yura Braiko on 17.11.16.
//

#include <iostream>
#include <stdio.h>
#include <locale>

void otvet(const char *, const unsigned int &, const unsigned int &, const unsigned int & = 0);

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
    char *tempstr = "INV      ";
    const char *str;
    unsigned n;
    unsigned int halfMaxValue = 0x80000000;
    printf("ТЕСТИРОВАНИЕ ПОРАЗР.ЛОГИЧИСКИХ ОПЕРАЦИЙ\n"
                   "\u00201-выполнение операции И (&)\n"
                   "\u00202-выполнение операции ИЛИ (|)\n"
                   "\u00203-выполнение операции ИСКЛ.ИЛИ (^)\n"
                   "\u00204-выполнение операции ЛОГ.СДВИГ ВЛЕВО (<<)\n"
                   "\u00205-выполнение операции ЛОГ.СДВИГ ВПРАВО (>>)\n"
                   "\u00206-выполнение операции ИНВЕРСИИ (~)\n"
                   "\u00207-завершить выполнение программы");
    do {
        printf("\n\nОперация? ");
        scanf("%hu", &operation);
        switch (operation) {
            case 1:
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u", &V1, &V2);
                V3 = V1 & V2;
                str = and;
                if (strcmp(str, tempstr) != 0) {
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                    n = V2;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                }
                else {
                    printf("%s%10u 0x%08x ", str, V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                }
                break;
            case 2:
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u", &V1, &V2);
                V3 = V1 | V2;
                str = or;
                if (strcmp(str, tempstr) != 0) {
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                    n = V2;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                }
                else {
                    printf("%s%10u 0x%08x ", str, V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                }
                break;
            case 3:
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u", &V1, &V2);
                V3 = V1 ^ V2;
                str = xor;
                if (strcmp(str, tempstr) != 0) {
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                    n = V2;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                }
                else {
                    printf("%s%10u 0x%08x ", str, V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                }
                break;
            case 4:
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u", &V1, &V2);
                V3 = V1 << V2;
                str = shl;
                if (strcmp(str, tempstr) != 0) {
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                    n = V2;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                }
                else {
                    printf("%s%10u 0x%08x ", str, V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                }
                break;
            case 5:
                printf("Введите два операнда из [0,4294967295]: ");
                scanf("%u%u", &V1, &V2);
                V3 = V1 >> V2;
                str = shr;
                if (strcmp(str, tempstr) != 0) {
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                    n = V2;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                }
                else {
                    printf("%s%10u 0x%08x ", str, V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                }
                break;
            case 6:
                printf("Введите один операнд из [0,4294967295]: ");
                scanf("%u", &V1);
                V3 = ~V1;
                str = inv;
                if (strcmp(str, tempstr) != 0) {
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                    n = V2;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("%s%10u 0x%08x ", str, V2, V2);
                }
                else {
                    printf("%s%10u 0x%08x ", str, V1, V1);
                    n = V1;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                    printf("\n===================================\n");
                    printf("\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020\u0020%10u 0x%08x ", V3, V3);
                    n = V3;
                    for (int i = 0; i < 32; i++) {
                        if (n & halfMaxValue) putc('1', stdout); else putc('0', stdout);
                        n = n << 1;
                    }
                }
                break;
            default:
                if (operation != 7)
                    printf("Введеное число, не соответсвует пункту меню.");

        }
    } while (operation != 7);
    return 0;
}