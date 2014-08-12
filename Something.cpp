#include <cstdio>
#include <iostream>
#include <string>


using namespace std ;

int main ()
{
    int c ;
    string c; 
    c = cin.get() ;                 //   Read first character
    while (!cin.eof())              //   Within a loop structure (while())
    {
        if (isalpha(c))             //   if character is alphabetic
        {
            cout.put(toupper(c)) ;  //   print out its uppercase equivalent
        }
        else//   otherwise
        {
            cout.put(c) ;           //   print out the unchanged character
        }
        c = cin.get() ;             //   read a new character
    }                               //   if not at End of File, repeat loop
    cout.put('\n') ;                //   else print a line feed and end
} // end program
