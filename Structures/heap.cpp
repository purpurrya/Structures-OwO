#include <iostream>
#include <vector>
#include "heap.h"
using namespace std;

Heap::Heap(int n) {
    array.push_back(n);
}
Heap::Heap(vector<int> array) {
    for (int i : array) {
        add(i);
    }
}
void Heap::add(int n) {
    array.push_back(n);
    int ind = array.size() - 1;
    while (array[ind] > array[(ind - 1) / 2]) {
        swap(array[ind], array[(ind - 1) / 2]);
        ind = (ind - 1) / 2;
    }
}

int Heap::get() {
    return array[0];
}

void Heap::del() {
    array[0] = array.back();
    array.pop_back();
    int ind = 0;
    while (2 * ind + 1 < array.size()) {
        int left = 2 * ind + 1;
        int right = 2 * ind + 2;
        int next = ind;
        if (array[left] > array[ind]) {
            next = left;
        }
        if (right < array.size() && array[right] > array[next]) {
            next = right;
        }
        if (next == ind) {
            break;
        }
        swap(array[ind], array[next]);
        ind = next;
    }
}

void Heap::print() {
    for (int i : array) {
        cout << i << " ";
    }
    cout << endl;
}

int Heap::get() {
        return array[0];
    }

void Heap::del() {
    swap(array[0], array.back());
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
        swap(array[ind], array[m_ind]);
        if (m_ind == ind) {
            break;
        }
        ind = m_ind;
    }
    if (2 * ind + 1 == array.size() - 1 && array[ind] < array[2 * ind + 1]) {
        swap(array[ind], array[2 * ind + 1]);
    }
}

void Heap::print() {
    for (int i : array) {
        cout << i << " ";
    }
    cout << endl;
}
