//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

void getbin(unsigned int);

void otvet(const char *str,
           const unsigned int &val3,
           const unsigned int &val1,
           const unsigned int &val2) {
    char *tempstr = "INV      ";
    cout << ("ОТВЕТ:\n");
    if (strcmp(str, tempstr) != 0) {
        cout << setfill(' ')<<setw(18) << dec << val1 << " 0x"<<setfill('0')<<setw(8)<<hex<<val1<< " ";
        getbin(val1);
        cout << str << setfill(' ')<<setw(10) << dec << val1 << " 0x"<<setfill('0')<<setw(8)<<hex<<val1<< " ";
        getbin(val2);
        cout << "\n===================================\n";
        cout << setfill(' ')<<setw(18) << dec << val3 << " 0x"<<setfill('0')<<setw(8)<<hex<<val3<< " ";
        getbin(val3);
    } else {
        cout << setfill(' ')<<setw(18) << dec << val1 << " 0x"<<setfill('0')<<setw(8)<<hex<<val1<< " ";
        getbin(val1);
        cout << "\n===================================\n";
        cout << setfill(' ')<<setw(18) << dec << val3 << " 0x"<<setfill('0')<<setw(8)<<hex<<val3<< " ";
        getbin(val3);
    }
}