#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<vector<int>> matrix = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rows = matrix.size();
    int cols = matrix[0].size();

    // Row-wise
    cout << "Row-wise:\n";
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Column-wise
    cout << "\nColumn-wise:\n";
    for(int j = 0; j < cols; j++) {
        for(int i = 0; i < rows; i++) {
            cout << matrix[i][j] << " ";
        }
    }

    // Diagonal
    cout << "\n\nDiagonal:\n";
    for(int i = 0; i < rows; i++) {
        cout << matrix[i][i] << " ";
    }

    return 0;
}