#include<iostream>
using namespace std;
void sum( int n ) {
    cout << "Sum of 1 to " << n << endl;
    int sumNum = 0;
    for (int i = 1;i <= n;i++) {
        sumNum += i;
    }
    cout << sumNum << endl;
}
int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    sum( n );
    return 0;
}