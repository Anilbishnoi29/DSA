#include<iostream>
using namespace std;

int main() {
    int a = 97;
    cout << sizeof( a ) << endl;
    char ch = 'a';
    cout << sizeof( ch ) << endl;

    char b = a;
    cout << b << endl;

    int num1 = 2, num2 = 5;
    cout << num1 / num2 << endl;//
    float num3 = 2;
    cout << num3 / num2 << endl;//


}