#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here

TEST_CASE("Caesar cipher encryption: testing"){
  CHECK(encryptCaesar("A Light-Year Apart", 5) == "F Qnlmy-Djfw Fufwy");
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

TEST_CASE("Vigenere cipher encryption: testing"){
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

/*
TEST_CASE("Decryption: testing"){
  CHECK(decryptCaesar(ciphertext, rshift) == "n");
  CHECK(decryptCaesar(ciphertext, rshift) == "n");
  CHECK(decryptCaesar(ciphertext, rshift) == "n");
}
*/
