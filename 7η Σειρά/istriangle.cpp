#include <iostream>
using namespace std;

int main() {
    double X, Y, Z;
    cin >> X >> Y >> Z;

    if (X + Y > Z &&
        X + Z > Y &&
        Y + Z > X) 
        cout << "yes\n";
    else
        cout << "no\n";

    return 0;
}
