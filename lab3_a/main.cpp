#include <iostream>
#include "Time.h"

using namespace std;

int main() {
    Time time1(3,30,3);
    Time time2(2,32,3);
    Time time3(3,5,2);

    time1.printf();
    time2.printf();
    time3.printf();

    time1+time2;
    time1.printf();

    time1+60;
    time1.printf();

    time1--;
    time1.printf();

    time1-10;
    time1.printf();

    time1-time3;
    time1.printf();

    return 0;
}