#include <bits/stdc++.h>
using namespace std;
//oops concept in linkedlist
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next =next1;
    }
    
    public:
    Node(int data1){
        data=data1;
        next=nullptr;
    }
    
};
//convert array into linkedlist
Node* convertArr2LL(vector<int> &arr){ //return pointer 
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next =temp;
        mover=temp;

    }
    return head;

}
//for find lenght of LL

int lenghtOFll(Node* head){
    int cnt=0;
    Node* temp=head;
        while(temp){
            temp=temp->next;
            cnt++;
        }
    return cnt;
}

//search in LL if present or not;

int check( Node* head,int val){
    Node* temp=head;
        while(temp){
            if(temp->data == val) return 1;
            temp=temp->next;
        }
        return 0;
}



int main(){
    vector<int> arr={2,5,8,7};
    Node *head= convertArr2LL(arr);
    //cout<<head->data;
    //traverse through lindklist
    /* Node* temp=head;
        while(temp){
             cout<<temp->data<<" ";
             temp=temp->next;
            } */

    //cout<< lenghtOFll(head);

    

}
