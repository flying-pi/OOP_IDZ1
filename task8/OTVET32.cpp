//
// Created by Yura Braiko on 17.11.16.
//

#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

void getbin(unsigned int,char *out);

void otvet(const char *str,
           const unsigned int &val3,
           const unsigned int &val1,
           const unsigned int &val2) {
    char *tempstr = "INV      ";

    ofstream out("./out.txt",std::ofstream::out | std::ofstream::app);
    char *binaryValue = new char[33];
    out << ("ОТВЕТ:\n");
    if (strcmp(str, tempstr) != 0) {
        out << setfill(' ')<<setw(18) << dec << val1 << " 0x"<<setfill('0')<<setw(8)<<hex<<val1<< " ";
        getbin(val1,binaryValue);
        out <<binaryValue;
        out << str << setfill(' ')<<setw(10) << dec << val2 << " 0x"<<setfill('0')<<setw(8)<<hex<<val2<< " ";
        getbin(val2,binaryValue);
        out <<binaryValue;
        out << "\n===================================\n";
        out << setfill(' ')<<setw(18) << dec << val3 << " 0x"<<setfill('0')<<setw(8)<<hex<<val3<< " ";
        getbin(val3,binaryValue);
        out <<binaryValue;
    } else {
        out << setfill(' ')<<setw(18) << dec << val1 << " 0x"<<setfill('0')<<setw(8)<<hex<<val1<< " ";
        getbin(val1,binaryValue);
        out <<binaryValue;
        out << "\n===================================\n";
        out << setfill(' ')<<setw(18) << dec << val3 << " 0x"<<setfill('0')<<setw(8)<<hex<<val3<< " ";
        getbin(val3,binaryValue);
        out <<binaryValue;
    }
    out << "\n";
    out.close();
    delete[] binaryValue;
}