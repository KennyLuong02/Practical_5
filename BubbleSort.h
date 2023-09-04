#include <iostream>
using namespace std;
#include <vector>
#include "Sort.h"

class BubbleSort : public Sort {
public:
    vector<int> sort(vector<int> list);
    


private:
    void bubbleSort(vector<int>& array);
};





