#include <bits/stdc++.h>
using namespace std;

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
//convert array to LL
Node*convertArr2LL(vector<int> &arr){ //return pointer 
    Node* head= new Node(arr[0]);
    Node* mover=head;
    for(int i=1; i<arr.size();i++){
        Node* temp=new Node(arr[i]);
        mover->next =temp;
        mover=temp;

    }
    return head;

}
//print LL
void print(Node* head){
    while(head !=NULL){
        cout<< head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}


// deletion of head of LL

Node* removeHead(Node*head){
    //edge case that i have to write always 
    if(head == NULL) return head;
    Node* temp=head;
    head=head->next;
    delete temp; //or use free(temp) when that node is no longer needed, the allocated memory of that node will need to be released through a call to free()
    return head;
}
//deletion of tail of LL
Node*removeTail(Node*head){
    if(head == NULL ||  head->next == NULL) return NULL;
    Node*temp=head;
    while(temp->next->next != NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next =nullptr;
    return head;
}

//deletion of any k th element 

Node* removeK(Node*head,int k){
    if(head == NULL) return head;
    if(k==1){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    else{
        int cnt=0;
        Node*temp=head;
        Node*prev=NULL;
        while(temp !=NULL){
            cnt++;
            if(cnt==k){
                prev->next=prev->next->next;
                free(temp);
                break;
            }
            prev=temp;
            temp=temp->next;

        }
        return head;
    }

}

int main(){
    vector<int> arr={12,5,8,7};
    Node* head=convertArr2LL(arr);
    head=removeK(head,2);
    print(head);
}