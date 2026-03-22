#include <bits/stdc++.h>
using namespace std;

int main() {

    // Hardcoded matrix
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    vector<int> result;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while(top <= bottom && left <= right) {

        // left → right
        for(int i = left; i <= right; i++) {
            result.push_back(matrix[top][i]);
        }
        top++;

        // top → bottom
        for(int i = top; i <= bottom; i++) {
            result.push_back(matrix[i][right]);
        }
        right--;

        // right → left
        if(top <= bottom) {
            for(int i = right; i >= left; i--) {
                result.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // bottom → top
        if(left <= right) {
            for(int i = bottom; i >= top; i--) {
                result.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    // Print spiral order
    cout << "Spiral Order: ";
    for(int x : result) {
        cout << x << " ";
    }

    return 0;
}