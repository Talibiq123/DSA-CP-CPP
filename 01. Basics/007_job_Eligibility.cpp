#include<bits/stdc++.h>

using namespace std;

int main() {
    int age;
    cout << "Enter age : ";
    cin >> age;

    if (age < 18) {
        cout << "Not Eligible for Job.";
    } else if (age <= 54){
        cout << "Eligible for Job.";
    } else if (age <= 57) {
        cout << "Eligible for Job But retirement soon.";
    } else {
        cout << "Retirement Time.";
    }
    return 0;
}
