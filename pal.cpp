#include <iostream>
#include <cstring>

using namespace std;


int main()
{
  char word[80];
  int i, length;
  int pal = 0;

  cout << "Enter word: ";
  cin >> word;

  //word.erase(remove(word.begin(), word.end(), ' '),word.end());

  
  length = strlen(word);

  /*for (i = 0; i < length; i++)
  {
    if (word[i] == NULL)
      {
	//word.erase(remove(word.begin(), word.end(), ' '),word.end());
	
      }
      }*/
  
  for (i = 0; i < length; i++)
  {
    if (word[i] != word[length - i - 1] && word[i] == ' ')
    {
      pal = 1;
    }
  }
  if (pal)
  {
    cout << "Not a palindrome";
  }
  else
  {
    cout << "Is a palindrome";
  }
  return 0;
}
