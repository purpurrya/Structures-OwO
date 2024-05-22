#include <iostream>
#include "heap.h"
using namespace std;

int main() {
    vector<int> v = { 10,7,8,2,1,2,1};
    Heap k(v);
    k.print();
    k.del();
}
