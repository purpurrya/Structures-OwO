#include <iostream>
#include "heap.h"

int zero_elements() {
    std::vector<int> v = { };
    Heap h(v);
    h.print();
    return 0;
}

