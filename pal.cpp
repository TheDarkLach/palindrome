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
  char rawinput [80];
  char noinput[80];
  bool pal = true;
  bool punc = false;
  int i = 0, len = 0;
  char whitelist [] = " ./;:',<>()?!@#$%^&*{}[]|";
  cout << "Enter word: ";
  cin.getline(rawinput,sizeof(rawinput));
  int length = strlen(rawinput);
  for (int i = 0; i != length; i++){
    if (!punccheck(rawinput[i], whitelist)){
      noinput[len] = rawinput[i];
      len++;
    }
  } 
  for (int g=0; g < strlen(noinput); g++)
  {
    noinput[g] = (tolower(noinput[g]));
  }
  for (int i = 0; i < len; i++){
    if (noinput[i] != noinput[len-i-1]){
      pal = false;
    }
  }
  if (pal == true){
    cout << "Palindrome";
  }
  else {
    cout << "Not a palindrome";
  }
}

