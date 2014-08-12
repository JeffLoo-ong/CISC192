#include <iostream>

using namespace std;

int main()
{
    float sum;
    int quarters, dimes, nickels, pennies;
    sum = 0;

    cout << "How much money (in USD) do you have?: $" ;
    cin >> sum;

    sum = sum * 100 ;

    quarters = sum/25;

    sum = sum - (quarters*25);

    dimes = sum/10;

    sum = sum -(dimes*10);

    nickels = sum/5;

    sum = sum - (nickels*5);

    pennies = sum;

    cout << "You have the following in SEGA  Tokens: \n"
        << quarters << " Quarters\n"
        << dimes << " Dimes\n"
        << nickels << " Nickels\n"
        << pennies << " Pennies\n";
    return 0;
}