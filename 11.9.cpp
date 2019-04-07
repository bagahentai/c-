#include <iostream>
#include <string>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

using namespace std;

int main()
{
    Package jian1("sasdf","s2",":s3","s134",123456,-10.25,-20.88);
    TwoDayPackage jian2("sdfsdf","sdfeff","fdawsekljf","fwaelkfjs",124145,2,10,30);
    OvernightPackage jian3("sdfa","fjeogha","fjksehfu","sdkljhfgkuj",124,20,30,10);
    jian1.calculateCost();
    jian2.calculateCost();
    jian3.calculateCost();
    return 0;
}
