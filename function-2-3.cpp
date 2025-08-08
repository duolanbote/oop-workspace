#include <iostream>

bool is_palindrome(int integers[], int length) {
    if (length <= 0) return false;
    int i = 0, j = length - 1;
    while (i < j) {
        if (integers[i] != integers[j]) return false;
        ++i; --j;
    }
    return true;
}

int sum_array_elements(int integers[], int length) {
    if (length <= 0) return -1;
    int s = 0;
    for (int i = 0; i < length; ++i) s += integers[i];
    return s;
}

int sum_if_palindrome(int integers[], int length) {
    if (length <= 0) return -1;
    if (!is_palindrome(integers, length)) return -2;
    return sum_array_elements(integers, length);
}
