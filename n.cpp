#include <iostream>
//#include "funcs.h"
#include <string>
#include <cctype>



char shiftChar(char c, int rshift)
{
  char newchar;
  if ((65 <= (c + rshift) <= 90) || (97 <= (c + rshift) <= 122))
  newchar = c + rshift;
  else if ((91 <= (c + rshift) <= 96) || (123 <= (c + rshift)))
  newchar = c + rshift - 26;
  return newchar;
}






// A helper function to shift one character by rshift
char shiftChar(char c, int rshift){
  //lower case a-z is 97-122
  //upper case A-Z is 65-90
  int asciiCode = c;

  //std::cout << "the letter is " << c << " and the value is " << asciiCode << std::endl;

  bool lower = false;
  bool upper = false;
  
  if(asciiCode <= 90 && asciiCode >= 65){
    upper = true;
  }else if(asciiCode <= 122 && asciiCode >= 97){
    lower = true;
  }

  if(upper == true){

    asciiCode += rshift;

    // std::cout << "after the shift, the value is " << asciiCode << std::endl;
    
    while(asciiCode > 90){
      asciiCode -= 25;
    }
    
  }else if(lower == true){

    asciiCode += rshift;

    // std::cout << "after the shift, the value is " << asciiCode << std::endl;
    
    while(asciiCode > 122){
      asciiCode -= 25;
    }
    
  }else{
    //if c is not an alphabet then
    return char(asciiCode);
    
  }

  //std::cout << char(asciiCode) << "this is the new letter and here's the num " << asciiCode << std::endl;

  return char(asciiCode);
}

// Caesar cipher encryption
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
  //std::cout << shiftChar ('b', 10) << "\n";
  //std::cout << "Ciphertext     : Rovvy, Gybvn!\n";
  std::cout << encryptCaesar("Hello, World!", 10);
    return 0;
}  









/*

  
#include <iostream>
#include <string>

char shiftChar(char c, int rshift) {
  char encodedchar = c + rshift;
  return encodedchar;
}

std::string encryptCaesar(std::string plaintext, int rshift) {
  std::string ciphertext = "";
  for (int i = 0;i < plaintext.length();i++) {
    ciphertext += shiftChar(plaintext[i],rshift)
  }
  return ciphertext;
}*/