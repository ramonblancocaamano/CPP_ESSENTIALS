#include <iostream>
using namespace std;

int main () {
    int i = 8;
    do {
        i--;
        cout << i--;
    } while(i);
    return 0;
}