#include <iostream>
#include <string>
extern void print_binary_str(std::string decimal_number);

int main() {
    std::string s = "13";     // 你可改成 "0"、"789" 等
    print_binary_str(s);
    return 0;
}
