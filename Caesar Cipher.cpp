/******************************************************
* Create a Caesar Cipher
* Jeffrey Luong
* Tues Jul  8  7:42:00:00 PDT 2014
******************************************************/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;
int main (int argc, char *argv[])
{
  char letter; 
  string words = "";
  int shift = atoi(argv[1]);
  
      while (! cin.eof())
      {
        letter = cin.get();
        words += letter;
        if (letter == '\n')
        {
            for (int a = 0; a < words.length(); a++)
            {
                if (isspace(words[a]))
                  continue;
              
              if (isalpha(words[a]))
              {
                if (isupper(words[a]))
                {
                  words[a] = tolower(words[a]);
                  words[a] = (((words[a]-97)+shift)%26)+97;
                }
                else
                {
                  words[a] = (((words[a]-97)+shift)%26)+97;
                }  
              }
            }
         cout << words <<endl;
         words = ""; 
        }
      }
}
        
