#include <iostream>
extern int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int bits[] = {1,1,0,1}; // 二进制 1101 = 13
    int n = 4;
    std::cout << binary_to_int(bits, n) << std::endl;
    return 0;
}
