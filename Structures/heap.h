#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
    vector<int> array;
public:
    Heap(int n);
    Heap(vector<int> array);
    void add(int n);
    int get();
    void del();
    void print();
};
