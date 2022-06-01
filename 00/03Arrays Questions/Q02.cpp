
#include<iostream>
using namespace std;

int main() {
    int arr1 [ 7 ] = { 3,2,1,2,4,4,1 };
    int ans = 0;
    for (int i = 0; i < 7;i++) {
        cout << arr1 [ i ] << " ";
    }
    cout << endl;
    for (int i = 0; i < 7;i++) {
        ans = ans ^ arr1 [ i ];
        cout << ans << " ";
    }
    cout << "Ans : " << ans << endl;
    return 0;
}