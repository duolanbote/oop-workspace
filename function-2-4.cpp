#include <iostream>

int array_min(int integers[], int length) {
    if (length <= 0) return -1;
    int m = integers[0];
    for (int i = 1; i < length; ++i) if (integers[i] < m) m = integers[i];
    return m;
}

int array_max(int integers[], int length) {
    if (length <= 0) return -1;
    int m = integers[0];
    for (int i = 1; i < length; ++i) if (integers[i] > m) m = integers[i];
    return m;
}

int sum_min_max(int integers[], int length) {
    if (length <= 0) return -1;
    int mn = array_min(integers, length);
    int mx = array_max(integers, length);
    if (mn == -1 || mx == -1) return -1;
    return mn + mx;
}
