#include <iostream>
using namespace std;

int main() {
    const char c = '1';
    const char *p;

    p = &c;
    *p = '?';

    cout << *p;
    return 0;
}