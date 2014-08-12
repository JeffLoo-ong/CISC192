#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

using namespace std;
int main (int argc, char *argv[])
{
  char c;
  string S = "";
  int n = 0;
 while(!cin.eof())
 {
  c = cin.get();
  if(isspace(c)){ continue;}

  if(isalpha(c) || ispunct(c))
  {
   S += c;
  }
 }

 double  num = sqrt( S.length());
 
 if( (num - (int)num) > 0.0)
 {
   
   n = sqrt(S.length()) + 1;

 }

 else{ n = num;}

 char table[n][n];
                                        // Insert While Loop
 for(int i = 0;i < n ; i ++)            // Starting from 0 to n
 {
	for(int j = 0; j < n ; j++)            // From 0 to n
        {
         table [ i ] [j ] = S[ i*n+j ];   // Make a table and append letters from 

         //printf("%c",table[ i ][ j ]); 
        }
        //printf("\n");
 }
  
 for(int i = 0;i < n ; i ++)
 {
	for(int j = 0; j < n ; j++)
        {
         printf("%c",table[ j ][ i ]);
        }
 }

 printf("\n");
 
 
}
