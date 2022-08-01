#include<iostream>
using namespace std;

void arrPrint( int arr [], int size ) {
    for (int i = 0; i < size; i++) {
        cout << arr [ i ] << endl;
    }
    cout << endl;
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
    cout << "Enter the position where to add new element" << endl;
    cin >> pos;
    cout << "Enter the item for insertion" << endl;
    cin >> item;
    cout << endl;

    for (int i = size;i >= pos - 1; i--) {
        arr [ i + 1 ] = arr [ i ];
    };
    arr [ pos - 1 ] = item;
    arrPrint( arr, size + 1 );
    return 0;
}