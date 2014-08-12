#include <cstdio>
#include <iostream>
#include <string>


using namespace std ;

int main ()
{
    int c ;
    string mystr; 
    c = cin.get() ;                 //   Read first character
    while (!cin.eof())              //   Within a loop structure (while())
    {
        if (isalpha(c))             //   if character is alphabetic
        {
            mystr += c;
        }
        
        c = cin.get() ;             //   read a new character
    }
    cout << mystr;                               //   if not at End of File, repeat loop
    cout.put('\n') ;                //   else print a line feed and end
} // end program
