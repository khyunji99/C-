#include <iostream>

using namespace std;

// 클래스 안에서도 오버로딩 할 수 있다. 

class Math {
public:

    float div(int a, int b) {
        cout << "div(int, int)" << endl;
        return a / b;
    }

    float div(float a, float b) {
        cout << "div(float, float)" << endl;
        return a / b;
    }

    double div(double a, double b) {
        cout << "div(double, double)" << endl;
        return a / b;
    }

    int mul(int a, int b) {
        return a * b;
    }

    float mul(float a, float b) {
        return a * b;
    }

};


int main() {
    Math math;

    int a = 24;
    int b = 36;
    float c = 1.5f;
    float d = 6.7f;
    double e = 3.38;
    double f = 4.56;


    cout << a << " / " << b << " = " << math.div(a, b) << endl;
    cout << c << " / " << d << " = " << math.div(c, d) << endl;
    cout << e << " / " << f << " = " << math.div(e, f) << endl;

    cout << a << " x " << b << " = " << math.mul(a, b) << endl;
    cout << c << " x " << d << " = " << math.mul(c, d) << endl;

    return 0;
}