#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks : ";
    cin >> marks;

    if (marks >= 90 && marks <= 100) {
        cout << "Grade: A";
    } else if (marks >= 80 && marks < 90) {
        cout << "Grade: B";
    } else if (marks >= 70 && marks < 80) {
        cout << "Grade: C";
    } else if (marks >= 60 && marks < 70) {
        cout << "Grade: D";
    } else if (marks >= 50 && marks < 60) {
        cout << "Grade: E";
    } else if (marks >= 40 && marks < 50) {
        cout << "Grade: F";
    } else if (marks >= 0 && marks < 40) {
        cout << "Grade: Fail";
    } else {
        cout << "Invalid marks entered!";
    }

    return 0;
}
