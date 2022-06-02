#include<iostream>
using namespace std;

int main() {

    int n;
    cout << "Enter a number" << endl;
    cin >> n;
    int i = 2, sum = 0;
    while (i <= n) {
        sum += i;
        i = i + 2;
    }
    cout << "sum of even number is ";
    cout << sum << endl;
    return 0;
}