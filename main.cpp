#include <iostream>

extern int count(int[], int);

int main(){
    int test_array[5] = {4,5,6,7,8};

    std::cout << "Even:" << count(test_array, 6) << std::endl; 
}
