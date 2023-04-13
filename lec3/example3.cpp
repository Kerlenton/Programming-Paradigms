#include <iostream>

int main() {
    int arr[5];
    arr[0] = 128;
    ((short*)arr)[1] = 1;
    std::cout << arr[0] << std::endl;

    // ((short*)(((char*)(&arr[1])) + 8))[3] = 100;
}
