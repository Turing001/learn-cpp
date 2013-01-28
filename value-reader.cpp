#include "std_lib_facilities.h"

int main() {
    double ione;
    double itwo;
    double subtraction;
    while(1==1) {
                cin >> ione;
                cin >> itwo;
            cout << ione << "\n";
            cout << itwo << "\n";
            if(ione < itwo){
                    cout << "The smaller value is " << ione << ".  The larger value is " << itwo << ".\n";
                    subtraction = (itwo - ione);
                    }
            else {
                 if(ione == itwo) cout << "The numbers are equal.\n";
                 else{
                      cout << "The smaller value is " << itwo << ".  The larger value is " << ione << ".\n";
                      subtraction = (ione - itwo);
                      }
                 }
            }
            if(subtraction < 1.0/10000000) cout << "The numbers are almost equal!\n";
    return 0;
    keep_window_open();
}
            
