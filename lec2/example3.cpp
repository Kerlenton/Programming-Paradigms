#include <iostream>

//    |10010100|00000000|                   s
//    |10010100|00000000|00000000|00000000| i

int main() {
    short s = (1 << 10) + (1 << 3) + (1 << 0);
    int i = s;
    std::cout << i << std::endl;
}
