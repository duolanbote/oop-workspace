#include <iostream>

int is_identity(int array[10][10]){

    for ( int i = 0; i < 10; i++)
    {
        for (int o = 0; o < 10; o++)
        {
            if (i == 0 && array[i][o] != 1)
            {
                return 0;
            }
            if (o != 0 && array[i][o] != 0)
            {
                return 0;
            }
            
        }
    }

    return 1;
}