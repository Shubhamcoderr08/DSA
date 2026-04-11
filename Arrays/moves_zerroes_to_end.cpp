#include <bits/stdc++.h>
using namespace std;

// void moveZeroes(vector<int>& nums) {
//     int j = 0;

//     for(int i = 0; i < nums.size(); i++){
//         if(nums[i] != 0){
//             swap(nums[i], nums[j]);
//             j++;
//         }
//     }
// }

// int main() {
//     vector<int> nums = {0,1,0,3,12};

//     moveZeroes(nums);

//     for(int x : nums){
//         cout << x << " ";
//     }

//     return 0;
// }

// Moves zeroes to the Front !!!

void move_Zeroes_Front(vector<int> &nums)
{

    int j = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{

    vector<int> nums = {1, 2, 0, 2, 0, 13};

    move_Zeroes_Front(nums);

    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}