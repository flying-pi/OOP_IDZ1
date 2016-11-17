//
// Created by Yura Braiko on 17.11.16.
//

#ifndef IDZ1_OUTPRINTER_H
#define IDZ1_OUTPRINTER_H

#include <list>

using namespace std;

class IPrinter {
public:
    virtual void printResult(const char *str,
                             const unsigned int &val3,
                             const unsigned int &val1,
                             const unsigned int &val2);

    virtual ~IPrinter() {

    }

protected:
    void getbin(unsigned int n, char *out);

    virtual ostream *getOutStream() = 0;
};

class PrintBuilder : public IPrinter {
public:
    ~PrintBuilder();


    PrintBuilder *addConsolePrinter();

    PrintBuilder *addFilePrinter();

    PrintBuilder *add(IPrinter *newPrinter);

    void printResult(const char *str,
                     const unsigned int &val3,
                     const unsigned int &val1,
                     const unsigned int &val2);

protected:
    virtual ostream *getOutStream() {
        return nullptr;
    }

private:
    list<IPrinter *> printers;

};

#endif //IDZ1_OUTPRINTER_H
