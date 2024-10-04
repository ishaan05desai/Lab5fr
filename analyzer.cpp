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
    
}