#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    if (number_of_digits <= 0) return -1;   // 简单的边界处理
    int value = 0;
    for (int i = 0; i < number_of_digits; ++i) {
        int b = binary_digits[i];           // 最左是最高位
        value = value * 2 + b;
    }
    return value;
}
