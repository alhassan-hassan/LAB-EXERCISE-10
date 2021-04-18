#include "StabbingLines.h"
#include <iostream>
using namespace std;

void StabbedLines1(LineGenerator lines[5], double stabbingLine ) {
    for (int i = 0; i < 5; i ++) {
        if ((lines[i].point1.x_coord < stabbingLine) &&(lines[i].point2.x_coord > stabbingLine)) {

            cout<<"Line with Points: ("<<lines[i].point1.x_coord <<" , "<<lines[i].point1.y_coord<<") and "
            <<"("<<lines[i].point2.x_coord <<" , "<<lines[i].point2.y_coord<<")"<<endl;
        }
    }

}
