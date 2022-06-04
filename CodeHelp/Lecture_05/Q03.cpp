#include<iostream>
using namespace std;
int main() {

    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2;i < n;i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }

    }
    if (flag) {
        cout << n << " is a prime number" << endl;
    }
    else {
        cout << n << " is not a prime number" << endl;
    }
    return 0;
}