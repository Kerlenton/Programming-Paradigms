#include <iostream>

//  |11001100110011001100011|10000001|0| f
//  |1100110011001100|                   s    

int main() {
    float f = 7.1;
    short s = *(short*)&f;
    std::cout << s << std::endl;
}
