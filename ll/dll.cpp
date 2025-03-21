#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* back;

    Node(int data,Node* next, Node* back){
        this->data = data;
        this->next = next;
        this->back = back;
    }
    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->back = nullptr;
    }
};

Node* arr2dll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i =1;i<5;i++){
        Node* nn = new Node(arr[i],nullptr,prev);
        prev->next = nn;
        prev = prev->next;
    }
    return head;
}

void printLL(Node* head){
    Node* trav = head;
    while(trav!=nullptr){
        cout<<trav->data<<" ";
        trav = trav->next;
    }
}


int main(){
    vector<int> arr = {20,30,50,80,90};
    Node* head = arr2dll(arr);
    printLL(head);
}