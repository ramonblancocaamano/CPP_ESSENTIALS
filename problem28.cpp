#include <iostream>
using namespace std;

int main() {
    int a = 0;

    if(++a == a) {
        cout << (a >> 1);
    } else {
        cout << (a);
    }
    return 0;
}