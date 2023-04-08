#include <iostream>

//      |11100000|00000010|01000101|00000000| i
//      |11100000|00000010|                   s

int main() {
    int i = (1 << 23) + (1 << 21) + (1 << 14) + 7;
    short s = i;
    std::cout << s << std::endl;
}
