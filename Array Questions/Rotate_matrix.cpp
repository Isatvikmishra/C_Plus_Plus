#include<bits/stdc++.h>
using namespace std;

//!optimal SC: O(1);
void rotate(vector < vector < int >> & matrix) {
    int n = matrix.size();
    //transposing the matrix
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
        swap(matrix[i][j], matrix[j][i]);
    }
    }
    //reversing each row of the matrix
    for (int i = 0; i < n; i++) {
    reverse(matrix[i].begin(), matrix[i].end());
    }
}

//!SC & TC:- O(n*m)
/*
vector<vector<int>> rotate(vector<vector<int>> &matrix, int n, int m){
    
    vector<vector<int>> rotated(n , vector<int>(n,0));



    for(int i = 0; i < n; i++){
        for(int j=0; j < m; j++){
            rotated[j][n-i-1] = matrix[i][j];        
        }
    }
    return rotated;    
}



int main(){

    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9}};
    int n = matrix.size();
    int m = matrix[0].size();
    
    vector < vector < int >> rotated = rotate(matrix,n,m);

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){

            cout << rotated[i][j] << "  ";
        }
        cout << endl;
    }

}
*/


int main() {
    vector < vector < int >> arr;
    arr =  {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotate(arr);
    cout << "Rotated Image" << endl;
    for (int i = 0; i < arr.size(); i++) {
    for (int j = 0; j < arr[0].size(); j++) {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
    }

}