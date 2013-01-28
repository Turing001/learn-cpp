#include <iostream.h>
inline void keep_window_open() { char ch; cin>>ch; }

int main() {
    int pennies, nickels, dimes, quarters, halfDs, dollars;
    cout << "How many pennies do you have?\n";
    cin >> pennies;
    cout << "\nHow many nickels do you have?\n";
    cin >> nickels;
    cout << "\nHow many dimes do you have?\n";
    cin >> dimes;
    cout << "\nHow many quarters do you have?\n";
    cin >> quarters;
    cout << "\nHow many half dollars do you have?\n";
    cin >> halfDs;
    cout << "\nHow many dollar coins do you have?\n";
    cin >> dollars;
    if(pennies == 1) {
               cout << "You have 1 penny.\n";
               }
    else {
         cout << "You have " << pennies << " pennies.\n";
         }
    if(nickels == 1) {
               cout << "You have 1 nickel.\n";
               }
    else {
         cout << "You have " << nickels << " nickels.\n";
         }
    if(dimes == 1) {
               cout << "You have 1 dime.\n";
               }
    else {
         cout << "You have " << dimes << " dimes.\n";
         }
    if(quarters == 1) {
               cout << "You have 1 quarter.\n";
               }
    else {
         cout << "You have " << quarters << " quarters.\n";
         }
    if(halfDs == 1) {
               cout << "You have 1 half dollar.\n";
               }
    else {
         cout << "You have " << halfDs << " half dollars.\n";
         }
    if(dollars == 1) {
               cout << "You have 1 dollar.\n";
               }
    else {
         cout << "You have " << dollars << " dollars.\n";
         }
    int total = ( pennies + ( nickels * 5 ) + ( dimes * 10 ) + ( quarters * 25 ) + ( halfDs * 50 ) + ( dollars * 100 ) );
    if(total == 1) cout << "You have 1 cent in all.";
    else {
         cout << "You have " << total << " cents in all.\n";
         if( ( total % 100 ) == 1 ) cout << "This is equal to " << ( total / 100 ) << " dollars and 1 cent.";
         else {
              if( ( total / 100 == 1) ) cout << "This is equal to 1 dollar and " << ( total % 100 ) << " cents.";
              else cout << "This is equal to " << ( total / 100 ) << " dollars and " << ( total % 100 ) << " cents.";
              }
         }
    keep_window_open();
    return 0;
}   
