#include <iostream>
#include "heap.h"
#include "tests.h"

int main() {
    std::vector<int> v = {10, 2, 3, 4, 6};
    Heap h(v);

    //zero_elements();

    //popping_zero_elements();

    //random_elements();

    //first_case_popping_random_elements();

    //second_case_popping_random_elements();

    third_case_popping_random_elements();
}
