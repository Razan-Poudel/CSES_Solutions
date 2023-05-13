#include <iostream>
int main(int argc, char **argv) {
  std::cout << "me\n";
  for (int i = 0; i < argc; i++) {
    std::cout << argc << "\t" << argv[i] << std::endl;
  }
  return 0;
}