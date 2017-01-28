//
// Created by Yura Braiko on 17.11.16.
//

#include <iostream>
#include <iomanip>
#include <fstream>
#include "OutPrinter.h"

PrintBuilder *PrintBuilder::add(IPrinter *newPrinter) {
    printers.push_back(newPrinter);
    return this;
}

void PrintBuilder::printResult(const char *str, const unsigned int &val3, const unsigned int &val1,
                               const unsigned int &val2) {
    for (auto i:printers)
        i->printResult(str, val3, val1, val2);

}

PrintBuilder::~PrintBuilder() {
    for (auto i:printers)
        delete i;
}

void IPrinter::getbin(unsigned int n, char *out) {
    for (int i = 0; i < 32; i++) {
        out[i] = n & 0x80000000 ? '1' : '0';
        n = n << 1;
    }
    out[32] = '\0';
}

void
IPrinter::printResult(const char *str, const unsigned int &val3, const unsigned int &val1, const unsigned int &val2) {
    ostream *out = getOutStream();
    if (out == nullptr)
        return;

    char *tempstr = "INV      ";
    char *binaryValue = new char[33];
    (*out) << ("ÎÒÂÅÒ:\n");
    if (strcmp(str, tempstr) != 0) {
        (*out) << setfill(' ') << setw(18) << dec << val1 << " 0x" << setfill('0') << setw(8) << hex << val1 << " ";
        getbin(val1, binaryValue);
        (*out) << binaryValue;
        (*out) << str << setfill(' ') << setw(10) << dec << val2 << " 0x" << setfill('0') << setw(8) << hex << val2
               << " ";
        getbin(val2, binaryValue);
        (*out) << binaryValue;
        (*out) << "\n===================================\n";
        (*out) << setfill(' ') << setw(18) << dec << val3 << " 0x" << setfill('0') << setw(8) << hex << val3 << " ";
        getbin(val3, binaryValue);
        (*out) << binaryValue;
    } else {
        (*out) << setfill(' ') << setw(18) << dec << val1 << " 0x" << setfill('0') << setw(8) << hex << val1 << " ";
        getbin(val1, binaryValue);
        (*out) << binaryValue;
        (*out) << "\n===================================\n";
        (*out) << str << setfill(' ') << setw(10) << dec << val3 << " 0x" << setfill('0') << setw(8) << hex << val3 << " ";
        getbin(val3, binaryValue);
        (*out) << binaryValue;
    }
    (*out)<<"\n";

    delete binaryValue;
}


class ConsolePrinter : public IPrinter {
public:
protected:
    virtual ostream *getOutStream() override {
        return &cout;
    }
};

class FilePrinter : public IPrinter {
public:
    FilePrinter() {
        isOpenFile = false;
        try {
            file.open("./out.txt", std::ofstream::out | std::ofstream::app);
            isOpenFile = true;
        }
        catch (std::ios_base::failure &e) {
            std::cerr << e.what() << '\n';
        }
    }

    ~FilePrinter() {
        (file).close();
    }

protected:
    ofstream file;
    bool  isOpenFile;

    virtual ostream *getOutStream() override {
        if(!isOpenFile)
            return nullptr;
        return &file;
    }
};

PrintBuilder *PrintBuilder::addConsolePrinter() {
    return add(new ConsolePrinter());
}

PrintBuilder *PrintBuilder::addFilePrinter() {
    return add(new FilePrinter());
}
