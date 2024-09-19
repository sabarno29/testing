#ifndef _outputModule_h
#define _outputModule_h

#include <iostream>
#include <fstream>

using namespace std;

class OutputModule
{
private:
    ofstream outFile1;
    ofstream outFile2;

public:
    void writeData();
};

#endif
