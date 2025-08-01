#include <iostream>

extern int count(int[], int);

int main(){
    int test_array[6] = {1,2,3,4,5,6};

    std::cout << "Even:" << count(test_array, 6) << std::endl; 
}
