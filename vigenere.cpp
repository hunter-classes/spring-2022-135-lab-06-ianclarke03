#include <iostream>
#include <cctype>
#include <string>
#include "vigenere.h"





std::string encryptVigenere(std::string plaintext, std::string keyword)
{
std::string result = "";

char character;
int ind = 0, encryptionKey;

for(int k = 0; k < plaintext.length(); ++k)
{
character = plaintext[k];

if(character >= 'A' && character <= 'Z')
   {
encryptionKey = keyword[ind] - 'a';
ind = (ind + 1) % keyword.length();
character = 'A' + (character - 'A' + encryptionKey + 26) % 26;
}
if(character >= 'a' && character <= 'z')
   {
encryptionKey = keyword[ind] - 'a';
ind = (ind + 1) % keyword.length();
character = 'a' + (character - 'a' + encryptionKey + 26) % 26;
}
result += character;
}
std::cout << result << std::endl;
return result;

}