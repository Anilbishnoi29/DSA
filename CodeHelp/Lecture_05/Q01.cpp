#include<iostream>
using namespace std;
int main() {

    int a = 4, b = 6;
    cout << "a & b : " << (a & b) << endl;
    cout << "a | b : " << (a | b) << endl;
    cout << "a ^ b : " << (a ^ b) << endl;
    cout << "~b : " << (~b) << endl;

    // left shift and right shift
    cout << "a << 1 : " << (a << 1) << endl;
    cout << "b >> 1 : " << (b >> 1) << endl;


    return 0;
}