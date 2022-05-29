#include<iostream>
using namespace std;
template <class X, class Y>
void printArr( X arr [], Y size ) {
    for (X i = 0;i < size;i++) {
        cout << arr [ i ] << " ";
    }
    cout << endl << endl;
};
void maxArr( int arr [], int size ) {
    int maxNum = 0;
    for (int i = 0;i < size;i++) {
        if (arr [ i ] > maxNum) {
            maxNum = arr [ i ];
        }
    }
    cout << maxNum << endl;
}
// use max min
void maxArrNum( int arr [], int size ) {
    int maxNum = INT8_MAX;
    for (int i = 0;i < size;i++) {
        if (arr [ i ] > maxNum) {
            maxNum = arr [ i ];
        }
    }
    cout << maxNum << endl;
}
void sumOfArr( int arr [], int size ) {
    int sum = 0;
    for (int i = 0;i < size;i++) {
        sum += arr [ i ];
    }
    cout << sum << endl;
}
// leaner search 
void isOnePresent( int arr [], int size ) {
    bool flag = false;
    for (int i = 0;i < size;i++) {
        if (arr [ i ] == 1) {
            flag = true;
        }
    }
    if (flag) {
        cout << "One is present" << endl;
    }
    else {
        cout << "One is NOT present" << endl;
    }
}
// Reverse an array
void reverseArr( int arr [], int size ) {
    int start = 0, end = size - 1;
    for (int i = size / 2; i > 0;i--) {
        int temp = arr [ start ];
        arr [ start ] = arr [ end ];
        arr [ end ] = temp;
        start++;
        end--;
    }
}
int main() {
    int arr1 [ 6 ] = { 91,32,3,4,5,6 };
    // char arr2 [ 6 ] = { 'a','b','c','d','e','f' };
    // printArr( arr1, 6 );
    // printArr( arr2, 6 );
    // maxArr( arr1, 6 );
    // maxArrNum( arr1, 6 );
    // sumOfArr( arr1, 6 );
    // isOnePresent( arr1, 6 );
    printArr( arr1, 6 );
    reverseArr( arr1, 6 );
    printArr( arr1, 6 );
    return 0;
}