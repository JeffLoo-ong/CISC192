/******************************************************
* 6.cpp - Breaking the Code
* max25  Jeffrey Luong
* Fri Jul  25  15:51:00:00 PDT 2014
******************************************************/

#include <iostream>
#include <stdlib.h>

using namespace std;
char c ;
int randchar () 
{
	
	int t = abs(802701 * rand()) ;
        t %= 93 ;
        t += '!' ;
        return t ;
}


int main(int argc, char *argv[])
{
	srand(time(NULL)) ;	
	string play = argv[1] ; 		//Play is equal to the first parameter in argv
	
	int count = 1 ;

	if ((play).compare("-e") == 0 ) //Compare play and if it matches "-e" byte for byte
	{
		
		int shift = atoi(argv[2]) ;	//Convert number shifter into integer 
		
			do
			{
  	 				if (count % shift != 0)	//If the word length divided by the shifter has remainders
  	 				{
  						cout << (char)randchar(); //Generate a random char
  					}	

  					else
  					{
  						cout << (char)cin.get() ;//Print the next char from file
  					}
  				
  					count++ ; 

  			}while(!cin.eof()) ;						 	
								
	}

	else if ((play).compare("-d") == 0) //Compare play and if it matches "-d" byte for byte  
	{
		int shift = atoi(argv[2]) ;	//Convert number shifter into integer 

		do
		{
  	 		char c = cin.get() ; 	//Grab a char and store it as an integer c
  	 		
  	 			if (count % shift == 0)	//If the word length divided by the shifter has no remainders
  	 			{
  						cout.put(c) ;			//Print it out		
  				}
  				count++ ; 
  		}		
	 

	while ( ! cin.eof()) ;
	}	
	cout << endl ;

}
	

