#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

// add your tests here

TEST_CASE("Caesar cipher encryption: testing"){
  CHECK(encryptCaesar(std::string plaintext, int rshift) == "n");
  CHECK(encryptCaesar(std::string plaintext, int rshift) == "n");
}

TEST_CASE("Vigenere cipher encryption: testing"){
  CHECK(encryptVigenere(string plaintext, string keyword) == "n");
  CHECK(encryptVigenere(string plaintext, string keyword) == "n");
  CHECK(encryptVigenere(string plaintext, string keyword) == "n");
}


TEST_CASE("Decryption: testing"){
  CHECK(decryptCaesar(ciphertext, rshift) == "n");
  CHECK(decryptCaesar(ciphertext, rshift) == "n");
  CHECK(decryptCaesar(ciphertext, rshift) == "n");
}