#include <iostream>
extern bool is_palindrome(int integers[], int length);
extern int  sum_array_elements(int integers[], int length);
extern int  sum_if_palindrome(int integers[], int length);

int main() {
    int a1[] = {1,2,3,2,1};  
    int n1 = 5;
    std::cout << sum_if_palindrome(a1, n1) << std::endl; 

    int a2[] = {1,2,3,4};    
    int n2 = 4;
    std::cout << sum_if_palindrome(a2, n2) << std::endl; 

    int n3 = 0;             
    std::cout << sum_if_palindrome(a2, n3) << std::endl; 
    return 0;
}
