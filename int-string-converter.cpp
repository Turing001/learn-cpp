#include "std_lib_facilities.h"

int main() {
    vector<string> numletters(10);
    numletters[0] = "zero";
    numletters[1] = "one";
    numletters[2] = "two";
    numletters[3] = "three";
    numletters[4] = "four";
    numletters[5] = "five";
    numletters[6] = "six";
    numletters[7] = "seven";
    numletters[8] = "eight";
    numletters[9] = "nine";
    vector<int> letternumbers(10);
    letternumbers[0] = 0;
    letternumbers[1] = 1;
    letternumbers[2] = 2;
    letternumbers[3] = 3;
    letternumbers[4] = 4;
    letternumbers[5] = 5;
    letternumbers[6] = 6;
    letternumbers[7] = 7;
    letternumbers[8] = 8;
    letternumbers[9] = 9;
    int input;
    string inputString;
    while(1 == 1) {
            cout << "Enter a number between 0 and 9." << endl;
            cin >> input;
            if(input > 9) cout << "That's not between 0 and 9!" << endl;
            else {
                 if(input < 0) cout << "That's not between 0 and 9!" << endl;
                 else cout << numletters[input] << "\n";
                 }
            }
    keep_window_open();
    return 0;
}
