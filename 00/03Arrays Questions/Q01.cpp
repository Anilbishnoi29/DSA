// alternative swap
#include<iostream>
using namespace std;
void printArr( int arr [], int size ) {
    cout << "Printing the array..." << endl;
    for (int i = 0;i < size;i++) {
        cout << arr [ i ] << " ";
    };
    cout << endl;
};
int main() {
    int arr1 [ 6 ] = { 1,2,3,4,5,6 };
    int arr2 [ 7 ] = { 1,2,3,4,5,6 ,7 };
    printArr( arr1, 6 );
    for (int i = 0;i < 6;i += 2) {
        if (i + 1 < 6) {
            swap( arr1 [ i ], arr1 [ i + 1 ] );
        };
    };
    for (int i = 0;i < 7;i += 2) {
        if (i + 1 < 7) {
            swap( arr2 [ i ], arr2 [ i + 1 ] );
        };
    };
    printArr( arr1, 6 );
    printArr( arr2, 7 );
    return 0;
}