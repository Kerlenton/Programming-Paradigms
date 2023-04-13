#include <iostream>

//  |___33___|
//  |___12___| pi.denum
//  |___22___| pi.num

struct fraction {
    int num;
    int denum;
};

int main() {
    fraction pi;
    pi.num = 22;
    pi.denum = 7;

    ((fraction*)&(pi.denum))->num = 12;
    ((fraction*)&(pi.denum))->denum = 33;
    std::cout << pi.denum;

    // ((fraction*)&(pi.denum))->denum;
    // (fration*)(&pi.denum)[0].denum;
    // (&pi)[1].num;
    // same things
}
