#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// GCD function
int gcd(int a, int b) {
    while(b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    // Hardcoded array
    vector<int> nums = {2, 5, 6, 9, 10};
  int n = nums.size();
  int minn = nums[0];
  int maxx = nums[0];
    // Find minn and maxx
   for(int i=0;i<n;i++){
    if(nums[i]>maxx) maxx = nums[i];
    if(nums[i]<minn)  minn = nums[i];
   }

    // Find GCD
    int result = gcd(minn, maxx);

    cout << "GCD of smallest and largest element: " << result;

    return 0;
}