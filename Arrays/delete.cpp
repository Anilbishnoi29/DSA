#include<iostream>
using namespace std;

void arrPrint( int arr [], int size ) {
    cout << "arr printing start!" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr [ i ] << endl;
    }
    cout << "arr printing done!" << endl;
}

int main() {
    int arr [ 100 ], size, pos, item;

    cout << "Enter the size of arr:" << endl;
    cin >> size;

    for (int i = 0;i < size;i++) {
        cout << "Enter the element at " << i << " = ";
        cin >> arr [ i ];
    }
    arrPrint( arr, size );
    cout << "Enter the position where to delete element" << endl;
    cin >> pos;
    cout << endl;

    for (int i = pos - 1; i < size - 1; i++) {
        arr [ i ] = arr [ i + 1 ];
    };
    arrPrint( arr, size - 1 );
    return 0;
}