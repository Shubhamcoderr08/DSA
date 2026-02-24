#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {10, 5, 20, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest)
        {
            secondLargest = arr[i];
        }
    }
    cout << "SecondLargest Element:" << secondLargest;
}