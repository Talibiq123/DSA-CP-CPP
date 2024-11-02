#include <iostream>
#include <string>
using namespace std;


string fancyString(string s) {
    return s;
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    string ans = fancyString(str);
    cout << "Fancy String: " << ans << endl;
    return 0;
}
