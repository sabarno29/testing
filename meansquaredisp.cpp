#include "meansquaredisp.h"
#include <iostream>
#include <cstdio>
#include <cmath>    // For sqrt()

using namespace std;

void Execut::CollectPx(unsigned** idTable, double** xTable, double** yTable, double** zTable, unsigned numFrames, unsigned maxIdVal) {
    for (unsigned i = 0; i < numFrames; ++i) {
        unsigned id = (*idTable)[i];
        double x = (*xTable)[id];
        double y = (*yTable)[id];
        double z = (*zTable)[id];

            // Perform calculations or processing with x, y, z
            // For example, you could compute the squared displacement here
        }
    }
}

void Execut::HigherProg()
{
    // Example implementation for HigherProg.
    // Adjust the functionality based on your actual needs.
    // This function can include more complex computations or data manipulations.
}

void Execut::InitValues()
{
    // Initialize values here. This could include allocating memory for arrays or setting default values.
    numInitFrame = 0;
    numCalcFrame = 0;
    maxIdVal = 0;
    numFrames = 0;

    idTable = new unsigned*[numFrames];
    xTable = new double*[numFrames];
    yTable = new double*[numFrames];
    zTable = new double*[numFrames];

    for (unsigned i = 0; i < numFrames; ++i) {
        idTable[i] = new unsigned[maxIdVal];
        xTable[i] = new double[maxIdVal];
        yTable[i] = new double[maxIdVal];
        zTable[i] = new double[maxIdVal];
    }

    totMSD = new double[numFrames];
    MSD = 0.0;
    norm = new unsigned[numFrames];
}

void Execut::OutputValues()
{
    // Implement output of values here.
    // For example, you can write the calculated data to a file or print it to the console.
    FILE* fp = fopen("output.dat", "w");
    if (fp == nullptr) {
        cerr << "Error opening output file" << endl;
        return;
    }

    for (unsigned i = 0; i < numFrames; ++i) {
        fprintf(fp, "%u %lf %lf %lf\n", i, (*xTable)[i], (*yTable)[i], (*zTable)[i]);
    }

    fclose(fp);
}

