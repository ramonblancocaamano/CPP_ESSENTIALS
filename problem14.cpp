#include <iostream>
#include <string>
using namespace std;

class Uno {
public:
    Uno() {
        cout << "X";
    }
};

Uno foo (Uno d) {
    Uno e = d;
    return e;
}

int main() {
    Uno u;
    foo(u);
    return 0;
}