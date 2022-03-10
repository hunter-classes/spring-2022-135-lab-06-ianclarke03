#include <iostream>
#include "funcs.h"

// add functions here

int test_ascii (std::string s)
  {
    for (int i = 0; i < s.length(); i++)
      {
        std::cout << s[i] << ' ' << int(s[i]) << "\n";
      }
  }

int main()
{
  std::cout << test_ascii ("Cat :3 Dog");

  return 0;
}