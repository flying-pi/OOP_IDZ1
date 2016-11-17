//
// Created by Yura Braiko on 17.11.16.
//

#include <iostream>

using namespace std;

void getbin(unsigned int n) {
    for (int i = 0; i < 32; i++) {
        if (n & 0x80000000)
            cout << '1';
        else
            cout << '0';
        n = n << 1;
    }
}