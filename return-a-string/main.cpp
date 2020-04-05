#include <iostream>
#include <string>

std::string returnString(int val) {
  char c = 'C';
  if(val == 0) {
    return "n/a";
  }
  else {
    std::string strOut(1, c);
    return strOut;
  }
}

int main() {

  std::string str1 = returnString(1);

  std::cout << "output string = " << str1 << std::endl;

  return 0;

}
