#include <bits/stdc++.h>
using namespace std;


// in DLL we have to store data of next memory as well as previous memory thats only change
class Node{
    public:
    int data;
    Node* next;
    Node* back;

    public:
    Node(int data1,Node* next1,Node* back1){
        data =data1;
        next=next1;
        back=back1;
    }
    public:
    Node(int data1){
        data =data1;
        next=nullptr;
        back=nullptr;
    }

};



//convert array into DLL

Node* convertArr2DLL(vector<int> &arr){
    Node* head= new Node(arr[0]);
    Node* prev=head;
    for(int i=1;i<arr.size();i++){
        Node* temp=new Node(arr[i]);
    }

}