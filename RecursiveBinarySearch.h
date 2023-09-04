#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {
    private:
        bool recursiveSearch(std::vector<int> vectorIn , int searchInput , int boundS , int boundL);

    public:
        RecursiveBinarySearch();
        bool search(std::vector<int> vectorIn, int searchInput);
};





#endif