#include <iostream>
using namespace std;

int binarySearch(int nums[], int n, int target) {
    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low +high) / 2;

        if(nums[mid] == target)
            return mid;
        else if(nums[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int n = 6;

    int target = 3;
  

    int result = binarySearch(nums, n, target);

    if(result != -1)
        cout << "Found at index: " << result;
    else
        cout << "Not Found";

    return 0;
}