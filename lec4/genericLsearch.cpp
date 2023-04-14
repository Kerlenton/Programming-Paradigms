#include <cstring>

void* lsearch(void* key, void* base, int n, int elemSize) {
    for (int i = 0; i < n; i++) {
        void* elemAddr = (char*)base + i * elemSize;

        if (memcmp(key, elemAddr, elemSize) == 0)
            return elemAddr;
    }

    return NULL;
}
