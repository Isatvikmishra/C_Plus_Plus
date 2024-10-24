#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Node {
public:

    // Data stored in the node
    int data;  
    
     // Pointer to the next node in the list
    Node* next;     

    // Constructor with both data
    // and next node as parameters
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data as
    // a parameter, sets next to nullptr
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};


int lengthOfLoop(Node* head){

    Node* fast = head;
    Node* slow = head;


    while(fast != NULL && fast->next != NULL){
      slow = slow->next;
      fast = fast->next->next;

        if(slow == fast){
            int ctr = 1;
            fast = fast->next;
                while(slow != fast){
                    ctr++;
                    fast = fast->next;
                }
        return ctr;    
        }
      
    }
return 0;
}


/*
int lengthOfLoop(Node* head){

    Node* temp = head;
    unordered_map<Node*,int>mpp;

    int ctr = 0;
    while(temp != NULL){
        if(mpp.find(temp) != mpp.end()){
            int lengthLoop = ctr - mpp[temp];
            return lengthLoop;
        }
    
     // Store the current node and
    // its timer value in the hashmap    
    mpp[temp] = ctr;
    
    temp = temp->next;
    ctr++;
    
    }
    return 0;
}
*/

int main(){
   Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);
    Node* fifth = new Node(5);

    // Create a loop from
    // fifth to second
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    
    // This creates a loop
    fifth->next = second; 

   int len = lengthOfLoop(head);

    if(len > 0){
        cout << "Loop detectd" << len; 
    }
    else{
        cout << "Loop not";
    }

}