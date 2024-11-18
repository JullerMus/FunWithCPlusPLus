#include <iostream>
#include <math.h>

using namespace std;

double power(double, double);

int main() {

    cout << power(2, 3) << endl;

    return 0;
}

double power(double base, int exponent) {
    const double result = pow(base, exponent);
    return result;
}