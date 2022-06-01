#include<iostream>
using namespace std;
void fact( int n ) {
    cout << "check " << n << " is prime or not " << endl;
    bool isPrime = true;
    if (n == 0) {
        cout << "Number should be greater than zero. zero is not a prime number." << endl;
    }
    else if (n == 1) {
        cout << "one is a prime number." << endl;
    }
    else {
        for (int i = 2; i < n / 2; i++) {
            if (n % i == 0) {
                isPrime = false;
            }
        }
        if (isPrime) {
            cout << n << " is a prime number." << endl;
        }
        else {
            cout << n << " is not a prime number." << endl;
        }
    }

}
int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    fact( n );
    return 0;
}