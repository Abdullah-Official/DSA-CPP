#include <iostream>

int main() {
  int num = 10;  // binary representation: 1010

  int result = 0;
  int bitmask = 1;
  while (num) {
    if (num & bitmask) {
      // Odd bit is set
      result |= (bitmask << 1);
    } else {
      // Even bit is set
      result |= (bitmask >> 1);
    }
    num >>= 1;
  }

  std::cout << result << std::endl;  // Outputs: 5 (binary: 0101)
  return 0;
}
