#include "std_lib_facilities.h"

class negative_root{};

int quadForm(int a, int b, int c) {
    double x = ((b*b) - (4*a*c));
    if(x<0) throw negative_root();
    double g = sqrt(x);
    double y = ((0 - b) + g);
    double z = ((0 - b) - g);
    cout << "First root: " << (y / (2*a)) << "\n";
    cout << "Second root: " << (z / (2*a)) << "\n";
    return 0;
}
int main() {
    try {
        int a;
        int b;
        int c;
        cout << "Quadratic Formula Calculator \n ================================= \n";
        cout << "A: ";
        cin >> a;
        cout << "\nB: ";
        cin >> b;
        cout << "\nC: ";
        cin >> c;
        quadForm(a, b, c);
    }
    catch (negative_root) {
        cerr << "Error: Negative discriminant, non-real answer.";
    }
}
