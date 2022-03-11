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
    str = str + let;

  }
  std::cout << str << std::endl;
return str;


}

