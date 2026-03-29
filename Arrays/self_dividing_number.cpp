#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> temp;

        for(int i = left; i <= right; i++) {
            int num = i;
            bool isValid = true;

            while(num > 0) {
                int lastdigit = num % 10;

                if(lastdigit == 0 || i % lastdigit != 0) {
                    isValid = false;
                    break;
                }

                num = num / 10;
            }

            if(isValid) {
                temp.push_back(i);
            }
        }

        return temp;
    }
};

int main() {
    Solution obj;
    
    int left = 1, right = 22;

    vector<int> result = obj.selfDividingNumbers(left, right);

    cout << "Self Dividing Numbers: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}