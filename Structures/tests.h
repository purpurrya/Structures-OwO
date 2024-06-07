#include <iostream>
#include "heap.h"
#pragma once

int zero_elements() {
    std::vector<int> v = {};
    Heap h(v);
    h.print();
    return 0;
}

int popping_zero_elements() {
    std::vector<int> v = { };
    Heap h(v);
    h.pop();
    h.print();
    return 0;
}

int random_elements() {
    std::vector<int> v = { };
    Heap h(v);
    for (int i = 0; i < 10; i++) {
        h.add(rand());
    }
    h.print();
    return 0;
}

int first_case_popping_random_elements() {
    std::vector<int> v = { };
    Heap h(v);
    for (int i = 0; i < 1000000000; i++) {
        h.add(rand());
    }
    for (int i = 0; i < 1000000000; i++) {
        h.pop();
        h.print();
    }
    return 0;
}

int second_case_popping_random_elements() {
    std::vector<int> v = { };
    Heap h(v);
    for (long long int i = 0; i < 10000000001; i++) {
        h.add(rand());
    }
    h.print();
    for (long long int i = 0; i < 10000000001; i++) {
        h.pop();
        h.print();
    }
    return 0;
}

int third_case_popping_random_elements() {
    std::vector<int> v = { };
    Heap h(v);
    for (int i = 0; i < 10; i++) {
        h.add(1);
    }
    h.print();
    for (int i = 0; i < 10; i++) {
        h.pop();
        h.print();
    }
    return 0;
}