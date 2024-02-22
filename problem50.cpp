#include <iostream>
using namespace std;

int main() {
    const char c = '!';
    const char *p;
    
    p = &c;
    *p = '?';

    cout << *p;

    return 0;
}