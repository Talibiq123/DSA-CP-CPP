#include<bits/stdc++.h>

using namespace std;

// pass by value
int doSomething(int num) {
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main() {
    int num = 10;
    doSomething(num);
    cout << "In main function" << endl;
    cout << num << endl;
    return 0;
}