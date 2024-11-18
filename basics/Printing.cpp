#include <iostream>
using namespace std;

void world();
void printVariables(int, int);

int main() {

    const double pi = 3.141592653589793;

    /*cout << "Hello" << endl;
    world();*/

    //printVariables(1, 2);

    cout << sizeof(pi) << endl;


    return 0;
}

void world() {
    cout << "World!" << endl;
}

void printVariables(const int a, const int b) {
    cout << "Printing a sum: " << a + b << endl;
}