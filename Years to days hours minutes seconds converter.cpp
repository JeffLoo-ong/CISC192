/***********************************************************
* asst0.cpp - Create a program that converts years to days,
* hours, mins, and seconds.
* max25 / Jeffrey Luong
* Fri Jun 13 8:00:00 PDT 2014
************************************************************/




#include <iostream>

using namespace std;

int main ()
{
    float years, days, hours, min, sec;
    cout << "How many years have you played The Game: ";
    cin >> years;
    days = years * 365.25;
    hours = days * 24;
    min = hours * 60;
    sec = min * 60;
    cout << "You have played: " <<years << " Years\n";
        << days <<" Days\n";
        << hours << " Hours\n";
        << min << " Minutes\n";
        << sec << " Seconds\n";
    return 0;
}
