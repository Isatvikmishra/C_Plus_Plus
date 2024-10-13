#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>transpose(vector<vector<int>> &matrix, int n, int N){

    vector<vector<int>> temp(N, vector<int>(n)); 


    for(int i = 0; i< n; i++){
        for (int j = 0; j < N; j++){
            temp[j][i] = matrix[i][j];
        }
    }
    return temp;

}


int main(){
   vector<vector<int>> matrix =  { {1,2,3}, {4,5,6}, {7,8,9}};
    int n = matrix.size(); // Number of rows
    int N = matrix[0].size(); // Number of columns

    vector<vector<int>> trans = transpose(matrix, n, N);

    for(int i = 0; i < N; i++){
        for(int j=0; j < n; j++){
            cout << trans[i] [j] << "  ";
        }
        cout << endl;
    }
}