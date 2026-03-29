#include <iostream>
#include <vector>
using namespace std;

int main() {
    int left = 1, right = 22;
    vector<int> result;

    for(int i = left; i <= right; i++) {
        int num = i;
        bool isValid = true;

        while(num > 0) {
            int digit = num % 10;

            if(digit == 0 || i % digit != 0) {
                isValid = false;
                break;
            }

            num /= 10;
        }

        if(isValid) {
            result.push_back(i);
        }
    }

    cout << "Self Dividing Numbers: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}