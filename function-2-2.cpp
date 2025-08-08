#include <iostream>

int binary_to_int(int binary_digits[], int number_of_digits) {
    if (number_of_digits <= 0) return -1;  
    int value = 0;
    for (int i = 0; i < number_of_digits; ++i) {
        int b = binary_digits[i];           
        value = value * 2 + b;
    }
    return value;
}
