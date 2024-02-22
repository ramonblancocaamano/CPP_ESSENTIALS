#include <iostream>
#include <string>
using namespace std;

string fun(string s1, string s2) {
    return s1 + s2;
}

int main() {
    string s = "1";
    string *t = &s;

    cout << fun(*t, "2");

    return 0;
}