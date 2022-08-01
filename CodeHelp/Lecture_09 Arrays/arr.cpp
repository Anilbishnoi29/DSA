#include<iostream>
using namespace std;
// print arr
void printArr( int* arr, int arrSize ) {
    for (int i = 0;i < arrSize;i++) {
        cout << "[" << i << "] = " << arr [ i ] << endl;
    }
}

int main() {
// arr insertion and print
    // int numberArr [ 10 ];
    // int numberArrSize = sizeof( numberArr ) / sizeof( numberArr [ 0 ] );

    // for (int i = 0;i < numberArrSize;i++) {
    //     cout << "Enter element at [" << i + 1 << "] = ";
    //     cin >> numberArr [ i ];
    //     cout << endl;
    // }
// print number arr
    // printArr( numberArr, numberArrSize );


// new arr for insertions
    int numArr [ 4 ] = { 0 };
    int numArrSize = sizeof( numArr ) / sizeof( numArr [ 0 ] );
     // int numArrSize = 10;
 // here we are insert only 9 elements instant of 10
    for (int i = 0; i < numArrSize - 1; i++) {
        cout << "Enter element at [" << i << "] = ";
        cin >> numArr [ i ];
        cout << endl;
    }
    printArr( numArr, numArrSize );

    // insert element at any location
    int loc, item;
    cout << "Enter the location where to insert new elements ";
    cin >> loc;
    cout << endl;
    cout << "Enter the  new elements ";
    cin >> item;

    for (int i = numArrSize - 1; i >= loc - 1; i--) {
        numArr [ i + 1 ] = numArr [ i ];
    };
    numArr [ loc - 1 ] = item;

    printArr( numArr, numArrSize );

}