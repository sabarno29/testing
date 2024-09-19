#ifndef _inputModule_h
#define _inputModule_h

#include <iostream>
#include <fstream>

using namespace std;

class InputModule
{
private:
    // Declare any private members if needed

public:
    void getFileData(unsigned int** idTable, double** xTable, double** yTable, double** zTable, unsigned int numFrames, unsigned int maxIdVal);
    void getUserData(unsigned int &param1, unsigned int &param2, unsigned int &param3, unsigned int &param4);
};

#endif
