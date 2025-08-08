#include <iostream>
#include <string>

void print_binary_str(std::string decimal_number) {
    int n = std::stoi(decimal_number);  
    if (n == 0) {
        std::cout << "0" << std::endl;
        return;
    }

    char buf[64];
    int k = 0;
    while (n > 0) {
        buf[k++] = char('0' + (n % 2));
        n /= 2;
    }
    for (int i = k - 1; i >= 0; --i) std::cout << buf[i];
    std::cout << std::endl;
}
