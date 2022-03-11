#include <iostream>
#include "funcs.h"
#include <string>
#include <cctype>

// add functions here
/*
int testascii (std::string s)
  {
    for (int i = 0; i < s.size(); i++)
      {
        std::cout << s[i] << " " << int(s[i]) << "\n";
      }
  }
*/


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


std::string encryptCaesar(std::string plaintext, int rshift){
   //char array to hold each letter converted from string
  char letters[plaintext.length()];
  std::string encrypted;

  for(int i = 0; i < plaintext.length(); i++){
   //to convert each letter from string to char
    letters[i] = plaintext[i];

    //std::cout << shiftChar(letters[i], rshift) << "this is the new letter" << std::endl;

    encrypted += shiftChar(letters[i], rshift);
  }
  
  return encrypted;
}





int main()
{
  std::cout << shiftChar ('b', 10) << "\n";
  std::cout << "Ciphertext     : Rovvy, Gybvn!\n";
  std::cout << encryptCaesar("Hello, World!", 10) << "\n";
  

  return 0;
}

