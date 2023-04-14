#include <cstring>

void swap(void* vp1, void* vp2, int size) {
    char buffer[size];
    memcpy(buffer, vp1, size);
    memcpy(vp1, vp2, size);
    memcpy(vp2, buffer, size);
}

int main() {
    int x = 17, y = 37;
    swap(&x, &y, sizeof(int));

    ////////////////////////
    
    int i = 44;
    short s = 5;
    swap(&i, &s, sizeof(short));

    ////////////////////////
    
    char* husband = strdup("Fred");
    char* wife = strdup("Wilma");
    swap(&husband, &wife, sizeof(char*));
    // swap(husband, wife, sizeof(char*));
}
