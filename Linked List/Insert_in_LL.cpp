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

Node* insertAtHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

Node* insertTail(Node* head, int val){
    if(head == NULL){
        return new Node(val);
    }
    Node* temp = head; 
    while(temp->next != NULL){
        temp = temp->next;
    }
    Node* newNode = new Node(val);
    temp->next = newNode;
    return head;
}

Node* insertK(Node* head, int el, int k){
    if(head == NULL){
        if(k==1){
            return new Node(el);
        }
        else 
            return head;
    }

    if(k==1){
        return new Node(el, head);
    }
    int ctr = 0;
    Node* temp = head;

    while(head!=NULL){
        ctr++;
        if(ctr == (k - 1)){
            Node* x = new Node (el);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
return head; 
}

Node* insertEleBeforeValue(Node* head, int el, int k){
    
    if(head == NULL){
        return NULL;
    }

    if(head->data == k){
        return new Node(el, head);
    }

    Node* temp = head;

    while(temp->next != NULL){

        if(temp->next->data == k){
            Node* x = new Node (el);
            x->next = temp->next;
            temp->next = x;
            break;
        }
        temp = temp->next;
    }
return head; 
}

int main(){

    vector<int> arr = {12,24,34,44};   
    Node* head = convertArr2LL(arr);

    //head = insertAtHead(head, 100);
    //head = insertTail(head, 100);
    head = insertK(head, 50, 2);
    
    head = insertEleBeforeValue(head, 26 ,34);

    while(head != NULL){
        cout << head->data << " ";
        head = head->next;
    }

}