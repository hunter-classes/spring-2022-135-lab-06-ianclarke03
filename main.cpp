#include <iostream>
#include "caesar.h"
#include "vigenere.h"
//#include "decrypt.h"

int main()
{
  std::cout << "Task B. Implementing Caesar cipher encryption:\n";
  
  std::cout << "Enter plaintext: A Light-Year Apart\nEnter shift    : 10/nCiphertext     : " << encryptCaesar("A Light-Year Apart", 5) << "\n";
  std::cout << "Enter plaintext: Hello, World!\nEnter shift    : 10/nCiphertext     : " << encryptCaesar("Hello, World!", 10") << "\n";
  std::cout << "\n";


  std::cout << "Task C. Implementing Vigenere cipher encryption:\n";
  
  std::cout << "Enter plaintext: Hello, World!\nEnter keyword  : cake\nCiphertext     : " << encryptVigenere("Hello, World!", "cake") << "\n";
  std::cout << "\n";

  
  std::cout << "Task D. Decryption:\n";
  
  std::cout << "Enter shift    : 10\nCiphertext     : Rovvy, Gybvn!\nDecrypted      : " << decryptCaesar("Rovvy, Gybvn!", 10) << "\n";
  std::cout << "Enter keyword  : cake\nCiphertext     : Jevpq, Wyvnd!\nDecrypted      : " << decryptVigenere("Jevpq, Wyvnd!", "cake") << "\n";
  
  std::cout << "Enter shift    : 5\nCiphertext     : F Qnlmy-Djfw Fufwy\nDecrypted      : " << decryptCaesar("F Qnlmy-Djfw Fufwy", 5) << "\n";
  std::cout << "Enter keyword  : cake\nCiphertext     : Jevpq, Wyvnd!\nDecrypted      : " << decryptVigenere("Jevpq, Wyvnd!", "CAKE") << "\n";
  
  std::cout << "\n";


  return 0;
  }