#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int  sum_array_elements(int integers[], int length);
extern int  sum_if_palindrome(int integers[], int length);

int main() {
    int a1[] = {1,2,3,2,1};  // 回文
    int n1 = 5;
    std::cout << sum_if_palindrome(a1, n1) << std::endl;  // 输出元素和

    int a2[] = {1,2,3,4};    // 非回文
    int n2 = 4;
    std::cout << sum_if_palindrome(a2, n2) << std::endl;  // -2

    int n3 = 0;              // 长度无效
    std::cout << sum_if_palindrome(a2, n3) << std::endl;  // -1
    return 0;
}
