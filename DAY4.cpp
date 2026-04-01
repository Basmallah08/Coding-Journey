#include <iostream>
using namespace std;

int main() {
    int leverTypes = 3;
    float force =10.5;
    float forceArm = 2.5;

    float torque = force * forceArm;

    cout << "Numder of Lever Types" << leverTypes <<endl;
    cout << "The Torque is: " torque << "N.m"<< endl;

    return 0;
     


}