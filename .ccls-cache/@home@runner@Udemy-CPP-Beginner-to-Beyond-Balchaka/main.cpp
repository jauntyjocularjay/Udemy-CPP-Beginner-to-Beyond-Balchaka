#include <iostream>


int main() {
  int favorite;
  std::string nl = "\n";
  std::string out = "Enter your favorite number between 1 and 100: ";
  std::cout << out;
  std::cin >> favorite;
  std::cout << favorite;
  if(favorite == 69){
    std::cout << nl + "Stop messing around!" << std::endl;
  }

  std::cout << "Okay, that's a good number, though!";
  return 0;
}