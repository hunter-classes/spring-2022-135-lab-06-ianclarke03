#include <iostream>
#include <string>
#include "caesar.h"

/*
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
*/

int charIndex(char o)
{
    int ascii = (int) o;
    if((isupper(o)))
    {
       ascii -= (int) 'A';
    }
    else
    {
        ascii -= (int)'a';
    }
    return ascii % 26;
}
  
std::string decryptCaesar(std::string plaintext, int rshift)
{
    std::string s = "";
    int i = -1;
    while(plaintext[++i])
    {
        s = s + shiftChar(plaintext[i], -rshift);
    }
    return s;

}

std::string decryptVigenere(std::string plaintext, std::string keyword)
{
    std::string result = "";
    int i = -1;
    int index = -1;

    while(plaintext[++i])
    {
        if(!isalpha(plaintext[i]))
        {
            result = result + plaintext[i];
        }
        else
        {
            result = result + shiftChar(plaintext[i], -charIndex(keyword[++index % keyword.length()]));
        }
    }
    return result;
}