/******************************************************
* asst04.cpp - Matrix Transposition Cipher  
* max25  Jeffrey Luong
* Mon Jul  14  11:54:00:00 PDT 2014
******************************************************/

#include <cstdio>
#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <math.h>


using namespace std ;


int randomchar ()                       //Function to create a random char
{
        int t = abs(802701 * rand()) ;  //Initialize a char t and have it set to the abs value of a random # 
        t %= 26 ;                       //Mod t to make it normalize to an ASCII letter
        t += 'a' ;                      //Add 97 it to make it fit an appropriate letter
        return t ;                      //Return t 
        cout.put(t);                    //Puts t onto the console?
        
            
}

int main ()
{
    int c ;                             //Initialize c to take ints
    int n ;                             //Initialize n to use as a # to make the perfect squares
    string mystr;                       //Initialize string mystr
    c = cin.get() ;                     //Read first character
    while (!cin.eof())                  //Within a loop structure (while())
    {
        if (isalpha(c)||(ispunct(c)))   //If character is alphabetic or a punctuation
        {
            mystr += c;                 //Append the char to mystr
        }
        
        c = cin.get() ;                 //Read a new character
    }
    
    double  num = sqrt( mystr.length());//Num = square root of string length
 
    if( (num - (int)num) > 0.0)         //If num has any decimals (not perf square)         
    {
        n = sqrt(mystr.length()) + 1;   //Take the sq rt of the length and add 1 (makes perfect sq)
    }
    else
    { 
        n = num;                        //If already perfect, we're good.
    }
    srand(time(NULL)) ;                 //Initialize random seed

    while (mystr.length() != pow(n,2))  //While the stringlength is not equal to n**
    {
        int y = (pow(n,2) - mystr.length()); //This tells us how many empty spaces we need to fill
        for (int x = 0; x < y; x++)     //For each empty space    
        {                               
        mystr += randomchar();          //Append a char generated by randomchar to the string
        }   
    }

    char table[n][n];                   //Create a 2 dimensional table with those two numbers.
    
    for(int i = 0;i < n ; i ++)         //Starting from 0 to n (Row)
    {
        for(int j = 0; j < n ; j++)     //From 0 to n (Columns) 
        {
         
         table [i][j] = mystr[ i*n+j ]; //Make a table and append letters from mystring 

        }
        
    }
  
    for(int i = 0;i < n ; i ++)         //For each Row
    {
        for(int j = 0; j < n ; j++)     //For each Column
        {
         printf("%c" , table[j][i]);    //Print the contents of the table from top to bottom, left to right
        }
    }

 printf("\n");                          //Print a line space
 

}                                       // end program
