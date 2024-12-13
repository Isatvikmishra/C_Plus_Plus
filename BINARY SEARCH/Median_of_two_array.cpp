#include<bits/stdc++.h>
using namespace std;

double medianOfTwoSortArr(vector<int> &arr1, vector<int> &arr2){
    int n1 = arr1.size();
    int n2 = arr2.size();
    vector<int>arr3;
    int i = 0, j=0;

    while(i < n1 && j <n2){
        if(arr1[i] < arr2[j]) arr3.push_back(arr1[i++]);
        else arr3.push_back(arr2[j++]);
    }

    while(i < n1) arr3.push_back(arr1[i++]);
    while(j < n2) arr3.push_back(arr2[j++]);

    int n = n1 + n2;
    if(n % 2 == 1) return arr3[n/2];
    
    double median = ((double)arr3[n / 2] + (double)arr3[(n / 2) - 1]) / 2;
    return median;


}

int main(){
    vector<int> arr1 = {1,3,5,6};
    vector<int> arr2 = {2,4};

    int ans =  medianOfTwoSortArr(arr1, arr2);

    cout << ans ;
    return 0;

}