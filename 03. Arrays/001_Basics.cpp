#include<bits/stdc++.h>

using namespace std;

int main() {
    // 1-D array
    int arr[5];
    cout << "Enter 5 elements of array : \n";
    for (int &i: arr) {
        cin >> i;
    }

    cout << "Array is :-\n";
    for(int i: arr) {
        cout << i << " ";
    }
    return 0;
}