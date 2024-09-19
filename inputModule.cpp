#include "inputModule.h"
#include <iostream>
#include <fstream>

using namespace std;

void InputModule::getFileData(unsigned int** idTable, double** xTable, double** yTable, double** zTable, unsigned int numFrames, unsigned int maxIdVal)
{
    ifstream inFileAllId("../uniqID_allwat_30A_T1.dat");
    if (!inFileAllId) {
        cerr << "Error opening uniqID_allwat_30A_T1.dat" << endl;
        return;
    }

    unsigned id;
    while (inFileAllId >> id) {
        // Populate idTable as needed
        // Ensure idTable is allocated and initialized correctly
    }
    inFileAllId.close();

    // Open and read x data
    ifstream inFileX("../input_OxyMx_30A_T1.dat");
    if (!inFileX) {
        cerr << "Error opening input_OxyMx_30A_T1.dat" << endl;
        return;
    }

    double x;
    while (inFileX >> id >> x) {
        if (id < numFrames) {
            (*xTable)[id] = x;
        }
    }
    inFileX.close();

    // Open and read y data
    ifstream inFileY("../input_OxyMy_30A_T1.dat");
    if (!inFileY) {
        cerr << "Error opening input_OxyMy_30A_T1.dat" << endl;
        return;
    }

    double y;
    while (inFileY >> id >> y) {
        if (id < numFrames) {
            (*yTable)[id] = y;
        }
    }
    inFileY.close();

    // Open and read z data
    ifstream inFileZ("../input_OxyMz_30A_T1.dat");
    if (!inFileZ) {
        cerr << "Error opening input_OxyMz_30A_T1.dat" << endl;
        return;
    }

    double z;
    while (inFileZ >> id >> z) {
        if (id < numFrames) {
            (*zTable)[id] = z;
        }
    }
    inFileZ.close();
}

void InputModule::getUserData(unsigned int &param1, unsigned int &param2, unsigned int &param3, unsigned int &param4)
{
    // Example implementation; adjust as necessary
    param1 = 10;  // Example value
    param2 = 20;  // Example value
    param3 = 30;  // Example value
    param4 = 40;  // Example value
}
