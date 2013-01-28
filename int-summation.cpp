#include "std_lib_facilities.h"

int main() {
    try{
        vector<int> inputs;
        cout << "Please enter some numbers (press '|' at prompt to stop)" << endl;
        int input;
        int numberToSum;
        int allSums = 0;
        while(cin >> input) inputs.push_back(input);
        cout << "Please enter how many of the numbers you wish to sum from the beginning: ";
        cin >> numberToSum;
        for(int i = 0; i<numberToSum; ++i) {
            allSums = allSums + inputs[i];
        }
        cout << "The sum of the first " << numberToSum << " numbers: " << allSums << endl;
    }
    catch(Range_error){
        cerr << "\nError: You didn't enter that many numbers!";
    }
}
