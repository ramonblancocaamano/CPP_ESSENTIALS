#include <iostream>
#include <string>
using namespace std;

class Uno {
protected:
    char y;
public:
    char z;
};

class Due : private Uno {
public:
    void set() {
        y = 'a';
        z = 'z';
    }

    void out() {
        cout << ++y << --z;;
    }
};

int main () {
    Due b;

    b.set();
    b.out();

    return 0;
}