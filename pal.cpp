#include <iostream>
#include <cstring>

using namespace std;

bool punccheck(char x, char white [])
{
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
  char input [80];
  char whitelist [] = " ./;:',<>()?!@#$%^&*{}[]|";
  int i;
  
  cout << "Enter word: ";
  
  cin.getline(input,sizeof(input));
  
  bool pal = true;
  int whitelength = strlen(whitelist);
  int length = strlen(input);
  

  for (int i=0; i<strlen(input); i++)
  {
     input[i] = (tolower(input[i]));
  }
  
  for (i = 0; i < length; i++)
  {
    if (input[i] != input[length-i-1])
    {
      if (!punccheck(input[i], whitelist)&&!punccheck(input[length-i-1], whitelist))
      {
        pal = false;
      }
    }
  }
  if (pal == true)
  {
    cout << "Is a palindrome";
  }
  else
  {
    cout << "Not a palindrome";
  }
}

