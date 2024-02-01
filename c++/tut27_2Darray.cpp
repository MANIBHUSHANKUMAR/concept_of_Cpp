/*#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the number of rows and columns: "<<endl;
    cin>>n>>m;
    int array[n][m];
    cout<<"enter the number of elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    cout<<"print the element of matrix:"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<array[i][j]<<"  ";
        }
        cout<<endl;
    }
    return 0;
}*/



// matrix multiplication.
/*#include<iostream>
using namespace std;

int main() {
    int r1, c1;
    cout << "Enter the number of rows and columns for matrix A: ";
    cin >> r1 >> c1;

    int A[r1][c1];
    cout << "Enter the elements of matrix A:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            cin >> A[i][j];
        }
    }

    int r2, c2;
    cout << "Enter the number of rows and columns for matrix B: ";
    cin >> r2 >> c2;

    int B[r2][c2];
    cout << "Enter the elements of matrix B:" << endl;
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            cin >> B[i][j];
        }
    }

    if (c1 != r2) {
        cout << "Matrix multiplication is not possible." << endl;
        return 1;  // Exit with an error code.
    }

    int C[r1][c2];
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            int value = 0;
            for (int k = 0; k < r2; k++) {
                value += A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }

    cout << "Matrix multiplication result:" << endl;
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}*/

// transpose of matrix

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;

    int array[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>array[i][j];
        }
    }
    int transpose[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            transpose[i][j]=array[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<transpose[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}