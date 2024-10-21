#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
        int data;
        Node* next;

    public:    
        Node(int data1, Node* next1){
            data = data1;
            next = next1;
        }
    public:
        Node(int data1){
            data = data1;
            next = nullptr;
        }    
};

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

Node* removesHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp; // to remove pre head
    return head;

}

Node* removeTail(Node* head){
    if(head == NULL || head->next == NULL) return NULL;
    Node* temp = head;
        while(temp->next->next != NULL){
            temp = temp->next;
        }

    free(temp->next);
    temp->next = nullptr;
    return head;
}

Node* removeK(Node* head, int k){

    if(head == NULL) return head;

    if (k == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    int ctr=0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        ctr++;
        if(ctr == k){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

Node* removeEl(Node* head, int el){

    if(head == NULL) return head;

    if (head->data == 1){
        Node* temp = head;
        head = head->next;
        free(temp);
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    while(temp != NULL){
        
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
    }
    return head;
}

int main(){

    vector<int> arr = {12,24,34,44};
    
    Node* head = convertArr2LL(arr);
//! removes head.   
   // head = removesHead(head);

//! removes tail.   
    //head = removeTail(head);

//! removes kth element
    //head = removeK(head, 4);

//! removes given element
    head = removeEl(head, 24);

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

}