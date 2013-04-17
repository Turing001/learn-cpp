#include "std_lib_facilities.h"

int main() {
    cout << "Your computer has recieved a virus.  To cancel downloading this virus, enter 1." << endl;
    cout << "To continue, press any other key." << endl;
    char val;
    cin >> val;
    if(val=1) { cout << "You didn't really think I would let you cancel this, did you?" << endl; }
    cout << "Downloading virus. . ." << endl;
    keep_window_open();
    return 0;
}
