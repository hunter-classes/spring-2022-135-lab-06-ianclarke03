#include <iostream>
#include <string>








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














char shiftChar(char c, int rshift) {
  char encodedchar = c + rshift;
  return encodedchar;
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  std::string ciphertext = "";
  for (int i = 0;i < plaintext.length();i++) {
    ciphertext += shiftChar(plaintext[i],rshift);
  }
  return ciphertext;
}

int main()
{
  //Task B
  std::string text = "Hi";
  std::cout << "Plain text: " << text << std::endl;
  
  int shift = 4;
  std::cout << "Shift: " << shift << std:: endl;

  std::cout << "Cipher text: " << encryptCaesar(text, shift) << "\n" << std::endl;

  text = "Hello, World!";
  std::cout << "Plain text: " << text << std::endl;
  
  shift = 18;
  std::cout << "Shift: " << shift << std:: endl;

  std::cout << "Cipher text: " << encryptCaesar(text, shift) << std::endl;
  
  return 0;
}