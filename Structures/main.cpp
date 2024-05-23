#include <iostream>
#include "heap.h"

int main() {
    std::vector<int> v = { 10,7,8,2,1,2,1};
    Heap k(v);
    k.print();
    k.del();
}
