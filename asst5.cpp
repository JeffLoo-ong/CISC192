/******************************************************
* asst05.cpp - Character Count w/ Histogram Display
* max25  Jeffrey Luong
* Fri Jul  18  15:45:00:00 PDT 2014
******************************************************/

#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <cstdio>
#include <iomanip>

using namespace std ;

int main()
{
    int lines = atoi(getenv("LINES")) ;     //Used to determine lines in terminal
    int columns = atoi(getenv("COLUMNS")) ; //Used to determine Columns in terminal
    int count [26] ;                //Initialize an array of that contains 26 values called count
    int stuff[26] ;                 //Initialize stuff to be used for bars vertically
    int n ;                         
    int vmax = 0 ;
    int v = 0 ;
    int m = 0 ;
    int d = 0 ;
    char c ;                        //Initialize a char C to store the letters as char
    
    for (n = 0; n < 26; n++)        //For loop here goes through every single  index in the array
    {
        count[n] = 0 ;
    }
    
    //Obtain the letters from the stream, check if alpha, 
    //check if lower, if not, convert and then tally in count

    while (! cin.eof())             //While not at the end of file...
    {
        c = cin.get() ;             //Grab a single char
        if (isalpha(c))             //if c is a character in the alphabet
        {   if(isupper(c))          //if it's an upper case
            {
                c =tolower(c) ;     //convert to lower case
            }
            count [c-'a']++ ;       //Each char is subtracted from a to obtain an INT value. As each value is retrieved, the COUNT for these values in the array goes up by 1.
        }

    }
   
    for (int x = 0; x < 26; x++)    //Print out Letters and # of occurences
    {
        cout << ((char)(x+97)) << " " << count[x] << endl ;
    }
    
    //Determine the max element in the array
    
    int max = count[0] ;            //Set max equal to the first element so we can check through each one

    for (int i = 0; i < 26; i++)
    {
        if(count[i] > max)          //For each element, if the value is HIGHER than max, set max equal to new element
        {
            max = count[i] ;   
        }
    }

    for (int y = 0; y < columns; y++)   //Print out a line the width of the terminal
    {
        cout << "-" ;
    }

    //Print out a table of the letters and number of occurences

    for (d = 0; d < 26; d++)    //For each letter
    { 
        stuff[d] = (lines * count[d]) / max ;   //Scale the numbers to equal bars and fit the window
                                                //Subtract 12 from columns to account for space taken if horizontal table 
        if (stuff[d] > vmax)
        {
            vmax = stuff[d] ;                   //Sets vmax  equal to largest stuff value
        }  
    } 
     
    for (int v = (lines-3); v >= 0; v--)     //For each scaled segment from the top line (subtract 3 for line usage)
    { 
        for (int h = 0; h < 26; h++)         //For each segment in that line (26 segs)
        {
            if(stuff[h] >= vmax)             //If stuff is greater than vmax
            {
                cout << setw(2) << " *" ;    //Print an asterisk
            }
            else
            {
                cout << setw(2) << " " ;     //Otherwise, print a space
            }                
                     
        }
        printf ("\n") ;                      //Next line
        vmax-- ;                             //Subtract 1 from vmax   
    }

    //Print a to z in line with bars above

    for (int z = 0; z < 26; z++)            
    {
        cout << setw(2) << ((char)(z+97)) ; 
    }    

      cout << endl ;
}

/* 
        Debugging/Horizontal graph making tools

        int number = count[x] ;     //Set number equal to the occurence of a letter
        int letter = ((char)(x+97)) ; //Set Letter equal to the char value of the letter
        
        printf("%7d %c ", number, letter) ;         //Print out letter and then occurences

        stuff = ((columns-12) * count[x]) / max ;   //Scale the numbers to equal bars and fit the window
                                                    //Subtract 10 from columns to account for space taken           
        
        
        for (n = 0; n < stuff; n++) //Prints out bars using scaled numbers Horizontally
        {
            printf ("=") ;  //Print out a = for every increment of stuff  
        }
        cout << endl ;
    
    
        cout << "Max= " << max << endl ;        // Used to test functionality of Max/Min
        cout << "Min= " << min << endl ; 
        cout << "Columns= " << columns << endl ;
        */
