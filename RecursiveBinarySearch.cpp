#include <iostream>
#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::search(std::vector<int> vectorInput , int searchInput) {
    return this->recursiveSearch(vectorInput , searchInput , 0 , vectorInput.size() - 1);
};

bool RecursiveBinarySearch::recursiveSearch (std::vector<int> vectorInput , int searchInput , int boundS , int boundL) {
    int midEle = (boundL + boundS) / 2;
    std::cout << vectorInput[midEle] << std::endl;

    if(vectorInput[midEle] == searchInput) {
        return true;
    } else if(boundL - boundS == 1) {
        return false;
    } else {
        if(vectorInput[midEle] > searchInput) {
            return recursiveSearch(vectorInput , searchInput , midEle , boundS);
        } else if(vectorInput[midEle] < searchInput) {
            return recursiveSearch(vectorInput , searchInput , midEle , boundL);
        }
    };
};


