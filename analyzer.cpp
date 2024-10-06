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

int main() {
    auto start = chrono::system_clock::now();
    int result = linear_search(getStringData(), "aaaaa");
    auto end = chrono::system_clock::now();
    chrono::duration<double> timediff = end - start;
    cout << "Time to find \"aaaaa\" using linear search: " << timediff.count() << ", index at " << result;

    auto start2 = chrono::system_clock::now();
    int result2 = binary_search(getStringData(), "aaaaa");
    auto end2 = chrono::system_clock::now();
    chrono::duration<double> timediff2 = end2 - start2;
    cout << "Time to find \"aaaaa\" using binary search: " << timediff2.count() << ", index at " << result2;

    auto start3 = chrono::system_clock::now();
    int result3 = linear_search(getStringData(), "mzzzz");
    auto end3 = chrono::system_clock::now();
    chrono::duration<double> timediff3 = end3 - start3;
    cout << "Time to find \"mzzzz\" using linear search: " << timediff3.count() << ", index at " << result3;

    auto start4 = chrono::system_clock::now();
    int result4 = binary_search(getStringData(), "mzzzz");
    auto end4 = chrono::system_clock::now();
    chrono::duration<double> timediff4 = end4 - start4;
    cout << "Time to find \"mzzzz\" using binary search: " << timediff4.count() << ", index at " << result4;

    auto start5 = chrono::system_clock::now();
    int result5 = linear_search(getStringData(), "not_here");
    auto end5 = chrono::system_clock::now();
    chrono::duration<double> timediff5 = end5 - start5;
    cout << "Time to find \"not_here\" using binary search: " << timediff5.count() << ", index at " << result5;

    auto start6 = chrono::system_clock::now();
    int result6 = binary_search(getStringData(), "not_here");
    auto end6 = chrono::system_clock::now();
    chrono::duration<double> timediff6 = end6 - start6;
    cout << "Time to find \"not_here\" using binary search: " << timediff6.count() << ", index at " << result6;
}