#include<bits/stdc++.h>

using namespace std;

vector<int> printspiral(vector<vector<int>> a){
    
    vector<int> ans;
    
    int n =  a.size(); //for rows
    int m = a[0].size(); //for columns
    
    int top = 0, left = 0, right = m - 1, bottom = n-1;

    while(top <= bottom && left <= right){

        //left to right
        for(int i = left; i <= right; i++){
            ans.push_back(a[top][i]); //top is row which is constant here as we traversing L -> R
        }           
        top++;

//top to bottom

        for(int i = top; i <= bottom; i++){
            ans.push_back(a[i][right]);
        }   
        right--;

//Right to left 

        if (top <= bottom) // check condi if only one row so it will not exe
        {
        for(int i = right; i >= left; i--){
            ans.push_back(a[bottom][i]);  
        }}
        bottom--;

//Bottom to top

        if (left <= right) // to check if the matrix is a single column or a single row
        {
            for(int i = bottom; i >= top; i--){
                ans.push_back(a[i][left]);
        }}
        left++;
    }
    return ans;
}

int main(){

vector<vector<int>> a =  {{1, 2, 3, 4},
                             {5, 6, 7, 8},
	                         {9, 10, 11, 12},
		                     {13, 14, 15, 16}};
		                     

vector<int> ans = printspiral(a);
 
    for(int i = 0; i < ans.size(); i++){
            cout << ans[i] << "  ";
    }

}

