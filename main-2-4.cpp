#include <iostream>
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int a[] = {5, -2, 7, 9, 0, 3};
    int n = 6;

    std::cout << array_min(a, n) << std::endl; 
    std::cout << array_max(a, n) << std::endl;  
    std::cout << sum_min_max(a, n) << std::endl; 
    return 0;
}
