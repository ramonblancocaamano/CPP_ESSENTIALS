#include <iostream>
using namespace std;

int k = -1;

class Class {
public: 
    char *adr;
    Class() {
        adr = new char[k];
    }
    ~Class() {
        delete[] adr;
    }
};

int fun() {
    Class object;
    return 0.5f;
}

int main() {
    fun();
    return 0;
}