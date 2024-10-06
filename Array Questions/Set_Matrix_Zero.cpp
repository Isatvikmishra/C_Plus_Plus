#include<bits/stdc++.h>

using namespace std;



//! TC: O(n*m), This is optimal because the approach is simple and direct.
/*
vector<vector<int>> matrixZero(vector<vector<int>> &matrix, int n, int m){
    int row[n] = {0}; //* row array
    int col[m] = {0}; //* col array
    
    
     //* Traverse the matrix:
    for(int i=0; i<n; i++){
        for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                //* mark ith index of row wih 1:
                    row[i] = 1;
                
                //* mark jth index of col wih 1:
                    col[j] = 1;    
                }
        }
    }
    
    //* Finally, mark all (i, j) as 0
    //* if row[i] or col[j] is marked with 1
    for(int i=0; i<n; i++){
        for(int j = 0; j < m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;    
                }
        }
    }
    return matrix;
}
*/



//! Brute: TC: O(n*m)
/*
void markRow(vector<vector<int>> &matrix, int n, int m, int i){
    for(int j = 0; j < m; j++){
           if(matrix[i][j] != 0){
            matrix[i][j] = -1;
           } 
    }
}

void markCol(vector<vector<int>> &matrix, int n, int m, int j){
    for(int i = 0; i < n; i++){
            if(matrix[i][j] != 0){
                matrix[i][j] = -1;
            } 
        }
}

vector<vector<int>> matrixZero(vector<vector<int>> matrix, int n, int m){
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j] == 0){
                markRow(matrix, n, m, i);
                markCol(matrix, n, m, j);
            }
        }

    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j<m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }

    return matrix;
}
*/


int main(){
    vector<vector<int>> matrix = {{1,1,0,1}, {0,1,1,1}, {0,0,1,1},{1,1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> ans = matrixZero(matrix,n,m);
    
     for (auto it : ans) {
        for (auto ele : it) {
            cout << ele << " ";
        }
        cout << "\n";
    }
}