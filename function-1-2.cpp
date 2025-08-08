#include <iostream>

int is_identity(int array[10][10]) {
    for (int i = 0; i < 10; ++i) {
        for (int o = 0; o < 10; ++o) {
            if (i == o && array[i][o] != 1) return 0; 
            if (i != o && array[i][o] != 0) return 0; 
        }
    }
    return 1;
}
