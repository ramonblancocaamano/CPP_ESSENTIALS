#include <iostream>
using namespace std;

class cmplx {
    double re;
    double im;
public:
    cmplx() : re(0), im(0) {}
    cmplx(double x) {
        re = im = x;
    }
    cmplx(double x, double y) {
        re = x;
        im = y;
    }
    void out() {
        cout << "(" << re << "," << im << ")";
    }
};

int main() {
    cmplx c(1,2);
    cmplx cc(c);
    cc.out();
}