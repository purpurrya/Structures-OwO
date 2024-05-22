#include <iostream>
#include <vector>
using namespace std;

class Heap {
private:
    vector<int> array;
public:
    Heap(int n) {
        array.push_back(n);
    }
    Heap(vector<int> array) {
        for (int i : array) { 
            add(i);
        }
    }

    void add(int n) {
        array.push_back(n);
        int ind = array.size() - 1; 
        while (array[ind] > array[(ind - 1) / 2]) {
            swap(array[ind], array[(ind - 1) / 2]);
            ind = (ind - 1) / 2;
        }
    }

    int get() {
        return array[0];
    }

    void del() {
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

    void print() {

        for (int i : array) {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> v = { 10,7,8,2,1,2,1 };
    Heap k(v);
    k.print();
    k.del();
}