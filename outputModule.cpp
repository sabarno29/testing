#include "outputModule.h"
#include <iostream>
#include <fstream>

using namespace std;

void OutputModule::writeData()
{
    // Open output files
    outFile1.open("output1.dat");
    outFile2.open("output2.dat");

    if (!outFile1 || !outFile2) {
        cerr << "Error opening output files." << endl;
        return;
    }

    // Example data writing
    for (unsigned i = 0; i < 80; ++i)
    {
        double t = 0.1 * i;
        outFile1 << t << " " << P1[i] << endl;
        outFile2 << t << " " << P2[i] << endl;
    }

    // Close output files
    outFile1.close();
    outFile2.close();
}
