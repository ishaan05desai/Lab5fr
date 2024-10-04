#include <iostream>
#include <chrono>
#include "StringData.h"

using namespace std;

int linear_search(const vector<string>& container, const string& element) {
    for (size_t i = 0; i < container.size(); i++) {
        if (container[i] == element) {
            return i;
        }
    }
    return -1;
}

int binary_search(const vector<string>& container, const string& element) {
    int low = 0;
    int high = container.size()-1;
    while (low <= high) {
        int mid = (low + high)/2;
        if (container[mid] == element) {
            return mid;
        } else if (container[mid] < element) {
            low = mid + 1;
        } else {
            high = mid + 1;
        }
    }
    return -1;
}
