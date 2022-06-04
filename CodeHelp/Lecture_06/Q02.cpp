#include<iostream>
using namespace std;
int main() {
    int a, b = 1;
    a = 10;
    if (++a) {
        cout << b << endl;
    }
    else {
        cout << ++b << endl;
    }

    int num = 3;
    cout << (25 * (++num)) << endl;
    cout << endl;
    int i = 1;
    for (; ;) {
        if (i <= 5)
            cout << i << " " << endl;
        else
            break;
        i++;
    }
// multiple 
    for (int a = 0, b = 5; a <= 5 && b >= 0; a++, b--) {
        cout << "a : b  " << a << " : " << b << endl;
    }
    cout << endl;
    cout << endl;
    for (int a = 0, b = 5; a <= 5 && b >= 0; ++a, --b) {
        cout << "a : b  " << a << " : " << b << endl;
    }


    return 0;
}