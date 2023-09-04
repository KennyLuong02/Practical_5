#include <iostream>
#include <vector>
#include "Sort.h"
#include "QuickSort.h"

using namespace std;

int main() {
    std::vector<int> list;

    list.push_back(-3);
    list.push_back(1);
    list.push_back(0);
    list.push_back(10);
    list.push_back(7);
    list.push_back(2);
    list.push_back(6);

    QuickSort q;
    list = q.sort(list);

    for (int i = 0; i < 7; i++) {
        cout << list.at(i) << " ";
    }

    cout << endl;

    return 0;

}