#include <iostream>
#include <vector>

class Heap {
private:
    std::vector<int> array;
public:
    Heap(int n);
    Heap(std::vector<int>& array);
    void add(int n);
    int top();
    void pop();
    void print();
};