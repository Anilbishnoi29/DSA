#include<iostream>
using namespace std;
void fact( int n ) {
    cout << "factorial " << n << endl;
    int factNum = 1;
    for (int i = 1;i <= n;i++) {
        factNum *= i;
    }
    cout << factNum << endl;
}
int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    fact( n );
    return 0;
}