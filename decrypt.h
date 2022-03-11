#pragma once
#include <string>

char shiftChar(char c, int rshift);

int charIndex(char o);

std::string decryptCaesar(std::string ciphertext, int rshift);

std::string decryptVigenere(std::string ciphertext, std::string keyword);