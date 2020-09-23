//Plaindrome program by Faizan Karim

#include <iostream>
#include <cstring>

using namespace std;

bool punccheck(char x, char white [])
{
  //function to check punctuation
  
  bool punccheck = false;
  for (int j = 0; j < strlen(white); j++)
    {
      if (x == white[j])
      {
        punccheck = true;
      }
    }
  return punccheck;
}
int main()
{
  //char array
  char input [80];
  
  //remove punctuation
  char whitelist [] = " ./;:',<>()?!@#$%^&*{}[]|";
  
  cout << "Enter word: ";
  
  cin.getline(input,sizeof(input));
  
  bool pal = true;
  int whitelength = strlen(whitelist);
  int length = strlen(input);
  

  for (int i=0; i<strlen(input); i++)
  {
    //make everything lower case
     input[i] = (tolower(input[i]));
  }
  
  for (int i = 0; i < length; i++)
  {
    if (input[i] != input[length-i-1])
    {
      //if word doesn't match after removing spaces and punctuation
      if (!punccheck(input[i], whitelist) && !punccheck(input[length-i-1], whitelist))
      {
        pal = false;
      }
    }
  }
  //print if or not pali
  if (pal == true)
  {
    cout << "\nIs a palindrome\n\n";
    cout << input;
  }
  else
  {
    cout << "\nNot a palindrome\n\n";
    cout << input;
  }
}

