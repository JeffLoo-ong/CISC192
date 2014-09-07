/******************************************************
* asst2.cpp - Generate 6 Lottery numbers
* max25  Jeffrey Luong
* Fri Jun  27 16:00:00 PDT 2014
******************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main()
{
    srand(time(NULL));                      //Seed the randomizer
    int newarray[51],  x, count, newnum, a; //Initalize a new array of size 51, x, count, newnum, and a
    x = 0;                                  //Set x=0, to be used as count for lottery numbers                         
    
    for(a = 0; a < 51; a++)                 //For each of the indexes
    {
        newarray[a] = 52;                   //Assign each index a value of 52
    }
    while (x < 6)                           //While we don't have 6 numbers generated
    {
        newnum = rand() % 50+1 ;            //Each new number is equal to a rand num between 1-50

        if (newarray[newnum] == 52)         //In the array, if the index selected is 52
        {
            newarray[newnum] =newnum;       //Replace the 52 with the new number 
            printf("%d", newnum);           //Print the new number 
            x+=1;                           //Increase the count by 1
        }


    }

}                                           //End Program

