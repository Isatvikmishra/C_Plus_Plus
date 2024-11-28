#include<bits/stdc++.h>
using namespace std;


int countStudents(vector<int> arr, int pages){
    int students = 1;
    long long pageStudent = 0;

    int n = arr.size();

    for(int i = 0 ; i< n; i++){
        if(pageStudent + arr[i] <= pages){
                pageStudent += arr[i];
        }
        else{
            students++;
            pageStudent = arr[i];
        }

    }
return students;
}

int findPages(vector<int> arr, int student){
    int n = arr.size();
    if(student > n)   return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while(low<=high){
        int mid  =( low + high) / 2;
        int value = countStudents(arr, mid);

        if(value > student)
          low = mid + 1;
        else
            high = mid - 1;
    }

    return low;

}

//! Linear 
/*

int findPages(vector<int> arr, int student){
    int n = arr.size();
    if(student > n)   return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    for(int i =low; i < high; i++){
        if(countStudents(arr, i) == student)
            return i;
    }

    return low;

}
*/

int main(){
    vector<int> arr = {25,46,28,49,24};
    int student = 4;

    int ans =  findPages(arr, student);

    cout << ans ;
    return 0;

}