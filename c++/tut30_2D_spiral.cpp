#include<iostream>
#include<vector>
using namespace std;

void spiralOrder(vector<vector<int> >& matrix) {
    int left = 0;
    int right = matrix[0].size() - 1;
    int top = 0;
    int bottom = matrix.size() - 1;

    int direction = 0;
    while (left <= right && top <= bottom) {
        // Left to Right
        if (direction == 0) {
            for (int col = left; col <= right; col++) {
                cout << matrix[top][col] << " ";
            }
            top++;
        }
        // Top to Bottom
        else if (direction == 1) {
            for (int row = top; row <= bottom; row++) {
                cout << matrix[row][right] << " ";
            }
            right--;
        }
        // Right to Left
        else if (direction == 2) {
            for (int col = right; col >= left; col--) {
                cout << matrix[bottom][col] << " ";
            }
            bottom--;
        }
        // Bottom to Top
        else {
            for (int row = bottom; row >= top; row--) {
                cout << matrix[row][left] << " ";
            }
            left++;
        }
        direction = (direction + 1) % 4;
    }
}

int main() {
    int n, m;
    cout<<"enter the number of rows and number of column in matrix: "<<endl;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    cout<<"enter the element of the matrix: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    spiralOrder(matrix);

    return 0;
}
