#include<iostream>
using namespace std;

int main() {

    int n, row = 1;
    cout << "Enter a number" << endl;
    cin >> n;
    while (row <= n) {
        int col = 1, count = row;
        while (col <= row) {
            cout << row + col - 1 << " ";
            // count++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}