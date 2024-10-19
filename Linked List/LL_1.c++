#include<bits/stdc++.h>
using namespace std;

class Node {
    public: // access modifier
        int data; // the data value
        Node* next; // the pointer to the next value
    
    // constructor
        public: 
            Node(int data1, Node* next1){
                data = data1; // Initialize data with the provided value
                next = next1; // Initialize next with the provided
            }
        public:
            Node(int data1){
                data = data1; // Initialize data with the provided value
                next = nullptr; // Initialize next as null since it's the end of the list
            }
};

//Convert array to Linked List:
Node* convertArr2LL(vector<int> &arr){

    Node* head = new Node(arr[0]);
    Node* mover = head;
    
    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;

}

//Check length of linked list
int length0fLL(Node* head){
    int ctr = 0;
    Node* temp = head; 
    while(temp){
        temp = temp->next;
        ctr++;
    }
    
return ctr;
}

//Check if element present in LL:
int checkifPresent(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val) return 1;
        temp = temp->next;
    }
    return 0;

}

int main(){
    vector<int> arr = {12,2,3,4};
    Node* head = convertArr2LL(arr);  
    cout << "Head of LL: " << head->data << endl;    // printing head;

    //Traversing in LL
        Node* temp = head; // temp will now the head so we dont miss it out
        while(temp){
            cout << temp->data << " ";
            temp = temp->next;
        }
    cout << endl;
    
    cout << "Length of LL: " << length0fLL(head) << endl;

    cout << "Searching of Elem: " << checkifPresent(head, 12);
    
}