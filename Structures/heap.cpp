#include <iostream>
#include <vector>
#include "heap.h"

Heap::Heap(int n) {
    array.push_back(n);
}
Heap::Heap(std::vector<int>& a) : array(a.begin(), a.end()) {}

void Heap::add(int n) {
    array.push_back(n);
    int ind = array.size() - 1;
    while (ind > 0 && array[ind] > array[(ind - 1) / 2]) {
        std::swap(array[ind], array[(ind - 1) / 2]);
        ind = (ind - 1) / 2;
    }
}

int Heap::top() {
    return array[0];
}

void Heap::pop() {
    if (array.empty()) {
        return;
    }
    std::swap(array[0], array.back());
    array.pop_back();
    int ind = 0;
    int m_ind;
    while (!(ind * 2 + 1 > array.size() - 1 || ind * 2 + 2 > array.size() - 1)) {
        if (array[2 * ind + 1] > array[2 * ind + 2]) {
            m_ind = 2 * ind + 1;
        }
        else {
            m_ind = 2 * ind + 2;
        }
        if (array[ind] > array[m_ind]) {
            m_ind = ind;
        }
        std::swap(array[ind], array[m_ind]);
        if (m_ind == ind) {
            break;
        }
        ind = m_ind;
    }
    if (2 * ind + 1 == array.size() - 1 && array[ind] < array[2 * ind + 1]) {
        std::swap(array[ind], array[2 * ind + 1]);
    }
}

void Heap::print() {
    for (int i : array) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}