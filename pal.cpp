#include <iostream>
#include <cstring>

using namespace std;


int main()
{
  char word[20];
  int i, length;
  int pal = 0;

  cout << "Enter word: ";
  cin >> word;

  length = strlen(word);

  for (i = 0; i < length; i++)
  {
    if (word[i] != word[length - i - 1])
    {
      pal = 1;
      break;
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
}
