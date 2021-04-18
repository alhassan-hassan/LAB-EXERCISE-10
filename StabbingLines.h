#ifndef STABBINGLINES_H_INCLUDED
#define STABBINGLINES_H_INCLUDED

#include<iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

struct PointsGenerator {
    double x_coord;
    double y_coord;
};

struct LineGenerator {
    PointsGenerator point1;
    PointsGenerator point2;
};

void readPoint(PointsGenerator point);

void readLine(LineGenerator line);

void StabbedLines1(LineGenerator lines[5], double stabbingLine );
#endif // STABBINGLINES_H_INCLUDED

