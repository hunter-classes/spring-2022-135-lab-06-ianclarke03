#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << "Task B. Implementing Caesar cipher encryption:\n";
  
  std::cout << "Enter plaintext: Hello, World!\nEnter shift    : 10/nCiphertext     : " << encryptCaesar(std::string plaintext, int rshift) << "\n";
  std::cout << "Enter plaintext: Hello, World!\nEnter shift    : 10/nCiphertext     : " << encryptCaesar(std::string plaintext, int rshift) << "\n";
  std::cout << "Enter plaintext: Hello, World!\nEnter shift    : 10/nCiphertext     : " << encryptCaesar(std::string plaintext, int rshift) << "\n";
  std::cout << "\n";


  std::cout << "Task C. Implementing Vigenere cipher encryption:\n";
  
  std::cout << "Enter plaintext: Hello, World!\nEnter keyword  : cake\nCiphertext     : Jevpq, Wyvnd!" << encryptVigenere(string plaintext, string keyword) << "\n";
  std::cout << "Enter plaintext: Hello, World!\nEnter keyword  : cake\nCiphertext     : Jevpq, Wyvnd!" << encryptVigenere(string plaintext, string keyword) << "\n";
  std::cout << "\n";

  
  std::cout << "Task D. Decryption:\n";
  
  std::cout << "The caesar cipher '' decoded is: " << decryptCaesar(ciphertext, rshift) << "\n";
  std::cout << "The vigenere cipher '' decoded is: " << decryptVigenere(ciphertext, keyword) << "\n";
    std::cout << "The caesar cipher '' decoded is: " << decryptCaesar(ciphertext, rshift) << "\n";
  std::cout << "The vigenere cipher '' decoded is: " << decryptVigenere(ciphertext, keyword) << "\n";
    std::cout << "The caesar cipher '' decoded is: " << decryptCaesar(ciphertext, rshift) << "\n";
  std::cout << "The vigenere cipher '' decoded is: " << decryptVigenere(ciphertext, keyword) << "\n";
  std::cout << "\n";


  return 0;
  }