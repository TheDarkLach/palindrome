//Palindrome by Faizan Karim, there was probably an easier way to do this
#include <iostream>
#include <cstring>

using namespace std;

//function to check for punctuation
bool punccheck(char x, char white [])
{
  bool punccheck = false;
  
  //iterate through every char
  for (int j = 0; j < strlen(white); j++)
    {
      if (x == white[j])
      {
        punccheck = true;
      }
    }
  /**
     could've used if (ispunct()) ?

   */
  return punccheck;
}

int main()
{
  //variables
  char input1 [80];
  char input2[80];
  bool pal = true;
  bool punc = false;
  int i = 0, len = 0;
  char whitelist [] = " ./;:',<>()?!@#$%^&*{}[]|";
  
  cout << "Enter word: ";
  
  cin.getline(input1,sizeof(input1));
  
  int length = strlen(input1);
  //iterate through every char and check for whitelisted
  for (int i = 0; i != length; i++){
    if (!punccheck(input1[i], whitelist)){
      input2[len] = input1[i];
      len++;
    }
  }
  //iterate through every char and lowercase it
  //earlier i just changed the ASCII value but that messed me up when it came
  //to already lowercased letters
  for (int g=0; g < strlen(input2); g++)
  {
    input2[g] = (tolower(input2[g]));
  }
  //if not the same, not a plaindrome
  for (int i = 0; i < len; i++){
    if (input2[i] != input2[len-i-1]){
      pal = false;
    }
  }
  //prints
  if (pal == true){
    cout << "Palindrome";
  }
  else {
    cout << "Not a palindrome";
  }
}

