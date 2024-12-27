#include<bits/stdc++.h>
using namespace std;

class Queue {
    int * arr;
    int start, end, curSize, maxSize;
    public:
        Queue(int size){
            arr = new int[16];
            start = -1;
            end = -1;
            curSize = 0;
            maxSize = size;
        }

        void push(int x){
            if(curSize == maxSize){ 
                cout << "Queue is full. Cannot push "<< endl;
                return;
            }
            if(end == -1){
                start = 0;
                end = 0;

            } else
                end = (end + 1) % maxSize;
            arr[end] = x;
            cout << "The element pushed is " << x << endl;
            curSize +=1;
        
        }

        int pop(){
            if(curSize == 0){ 
                cout << "Queue is empty. Cannot pop "<< endl;
            }

            int poppedEl = arr[start];

            if(curSize == 1){
                start= -1;
                end = -1;
            }
            else
                start = (start + 1) % maxSize;
            curSize -=1;
            return poppedEl;
            
        }
        int top(){
            if(curSize == -1){ 
                cout << "No element" << endl;
                return -1;
            }

            return arr[start];
        }
        int size(){
            return curSize;
        }
};


int main() {
  Queue q(6);
  q.push(4);
  q.push(14);
  q.push(24);
  q.push(34);
  cout << "The peek of the queue before deleting any element " << q.top() << endl;
  cout << "The size of the queue before deletion " << q.size() << endl;
  cout << "The first element to be deleted " << q.pop() << endl;
  cout << "The peek of the queue after deleting an element " << q.top() << endl;
  cout << "The size of the queue after deleting an element " << q.size() << endl;

  return 0;
}