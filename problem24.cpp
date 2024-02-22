class X {
private:
    int x;
protected:
    int y;
public:
    int z;
};

class Y: protected X {
    
};
/*
 * x; IT IS NOT ALLOWED.
 * y; PROTECTED.
 * z, PROTECTED.
 */
