#include <iostream>
using namespace std;

void world();
void printVariables(int a, int b);

int main() {
    /*cout << "Hello" << endl;
    world();*/

    printVariables(1, 2);

    return 0;
}

void world() {
    cout << "World!" << endl;
}

void printVariables(int a, int b) {
    cout << "Printing a sum: " << a + b << endl;
}