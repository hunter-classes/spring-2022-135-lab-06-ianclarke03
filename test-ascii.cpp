#include <iostream>
#include <string>


int testascii (std::string s)
  {
    for (int i = 0; i < s.size(); i++)
      {
        std::cout << s[i] << " " << int(s[i]) << "\n";
      }
  }



int main() {
  std::cout << "Cat :3 Dog: \n";
  testascii("Cat :3 Dog");
  std::cout << std::endl;
  
  std::cout << "Hello, World!: \n";
  testascii("Hello, World!");
  std::cout << std::endl;
  return 0;
}