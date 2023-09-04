#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
#include "Sort.h"

using namespace std;

class QuickSort: public Sort {
    public:
        QuickSort();
        std::vector<int> sort(std::vector<int> list);
        void sort(vector<int>& array, int start, int end);

};

#endif