#include "binary_search.h"

int BinarySearch::search(const std::vector<int>& arr, int target) {
    numberComparisons = 0;
    int left = 0;
    int right = arr.size() - 1;
    while (left <= right) {
        numberComparisons++;
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        }
        if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}