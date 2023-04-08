#include <iostream>

//  |10100100|00000000|00000000|00000000| i
//  |10100100000000000000000|00000000|0|  f

int main() {
    int i = 37;
    float f = *(float*)&i;
    std::cout << f << std::endl;
}
