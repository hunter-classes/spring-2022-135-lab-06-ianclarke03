#include <iostream>
#include <cctype>
#include <string>
#include "caesar.h"


char shiftChar(char c, int rshift){
  int a = int(c);
  if (a >= 'A' && a <= 'Z'){
    a = 'A' + (a - 'A' + rshift + 26) %26;
}
if(a >= 'a' && a <= 'z')
{
a = 'a' + (a - 'a' + rshift + 26) %26;
}


return char(a);
}




std::string encryptCaesar(std::string plaintext, int rshift){
  int len = plaintext.length();
  std::string str = "";
  char let;
  for (int i = 0; i < len; i++){
    let = shiftChar(plaintext[i], rshift);
    str += let;

  }
  std::cout << str << std::endl;
return str;


}


/*
char shiftChar(char c, int rshift)
{
  char newchar;
  if ((65 <= (c + rshift) <= 90) || (97 <= (c + rshift) <= 122))
  newchar = c + rshift;
  else if ((91 <= (c + rshift) <= 96) || (123 <= (c + rshift)))
  newchar = c + rshift - 26;
  return newchar;
}

/*
std::string encryptCaesar(std::string plaintext, int rshift)
{
  std::string ciphertext = "";
  for (int i = 0; i < plaintext.size(); i++)
      {
        if (isalpha(plaintext[i]))
        {
          ciphertext += shiftChar(plaintext[i], rshift);
          }
        else
          ciphertext += plaintext[i];
        }
  std::cout << ciphertext << "\n";
}
*/

