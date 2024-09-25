#include<bits/stdc++.h>
#include <iostream>

using namespace std;

vector<int> intersectionTwo(vector<int>&arr1,int n1, vector<int>&arr2,int n2){
    vector<int> temp;
    
    for(int i = 0; i < n1; i++){
        for (int j = 0; j < n2; j++){
            if(arr1[i] == arr2[j]){
                temp.push_back(arr1[i]);
            }
        }
    }
    return temp;
    //!TC- O(n1*n2)
    
}

vector<int> unionTwo(vector<int> &arr1 ,int n1 , vector<int> &arr2 , int n2){
//! 2Pointer approach:
    vector<int> unionArr;
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(arr1[i] <= arr2[j])
        {
            if( unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else { 
            if( unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(j < n2){
        if( unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
        j++;
    }
    while (i < n1){
            if( unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }

    return unionArr;
    //! TC- O(n1+n2)
 
 
 /*
    vector<int> temp;
    ? We can use unique & set data structures.
    for(int i = 0; i < n1; i++){
         temp.push_back(arr1[i]);
    }

    for(int j = 0; j < n2; j++){
        if(temp[j] != arr2[j]){
         temp.push_back(arr2[j]);
        }
    }
    
    return temp;
*/
    // ! TC: O=(n1+n2) but could go upto O(n2 * (n1 + n2)) for the comparison;
}

int main(){
    vector<int> arr1 = {1,2,3,4,5};
    int n1 = arr1.size();

    vector<int> arr2 = {2,3,4,7,9};
    int n2 = arr2.size();

    vector<int> result = intersectionTwo(arr1,n1,arr2,n2);
    vector<int> result2 = unionTwo(arr1,n1,arr2,n2);

    cout << "Intersection: ";
    for (int num : result){
        cout << num << " ";
    }
    cout << endl;
    cout << "Union: ";
    for (int num2 : result2){
            cout << num2 << " ";
    }

    /* 
    !or
    for (int i = 0; i < result.size(); i++) {
    cout << result[i] << " ";
    }
    */

}