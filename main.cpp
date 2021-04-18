#include "StabbingLines.h"
#include <iostream>

using namespace std;

struct PointsGenerator;
struct LineGenerator;

int main()
{
    PointsGenerator p1 = {0,4};
    PointsGenerator p2 = {2,4};
    PointsGenerator p3 = {-2,0};
    PointsGenerator p4 = {0,4};
    PointsGenerator p5 = {4,9};
    PointsGenerator p6 = {-3,4};
    PointsGenerator p7 = {0,4.5};

    readPoint(p1);
    cout<<endl;

    LineGenerator l0 = {p3, p4};
    LineGenerator l1 = {p7, p2};
    LineGenerator l2 = {p3, p4};
    LineGenerator l3 = {p1, p5};
    LineGenerator l4 = {p6, p5};

    readLine(l2);
    cout<<endl;

    LineGenerator lines[5] = {l0, l1, l2, l3, l4};

    cout<<"The stabbed Lines are higlighted below."<<endl;
    StabbedLines1(lines, 1);


    return 0;
}
