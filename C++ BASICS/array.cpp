#include<iostream>
using namespace std;

int main(){
  /*
    int arr[5];
    cout << "Enter array";
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

     arr[3] += 10; Add into array
     arr[3] = 16; Replace 3 array with 16
    cout << arr[3];
    */
    int arr[5];
    cout << "enter array";
    for (int i=0; i<=4; i++){
      cin >> arr[i];
      cout << i << endl;
    }
    for (int i=0; i<=4; i++){
      cout << arr[i];

    }
    
   
   /* 2d array
        int arr [3] [5];
        arr[1] [3] = 78;
        cout<<arr[1][3];
   */
    return 0;
}
