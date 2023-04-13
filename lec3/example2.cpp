#include <iostream>

// array = &array[0]
// array + k = &array[k]
// *array = array[0]
// *(array + k) = array[k]

int main() {
    int array[10];

    array[0] = 44;
    array[9] = 100;
    array[5] = 45;
    array[10] = 1;
    array[25] = 25;
    array[-4] = 77;
}
