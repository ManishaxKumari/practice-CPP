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

//deletion of any k th element (when position given)

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

//deletion of value 

Node* removeK1(Node*head,int el){
    if(head == NULL) return head;
    if(head->data==el){
        Node*temp=head;
        head=head->next;
        free(temp);
        return head;
    }
    else{
        Node*temp=head;
        Node*prev=NULL;
        while(temp !=NULL){
            if(temp->data==el){
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

//deleting any node if head is not given but only node is given 
 void deleteNode(Node* node) {
        node->data=node->next->data;
        node->next=node->next->next;
    }  

//insertion of head 
Node* inserthead(Node* head,int val){
    Node* temp = new Node(val ,head);
    return temp;
    //return new node(val,head);
}

//insert at last 
Node* inserttal(Node* head ,int val){
    if (head == NULL){
        return new Node(val);
    }
    Node* temp =head;
    while(temp->next !=NULL){
        temp = temp->next;
    }
    Node* newNode= new Node(val);
    temp->next =newNode;
    return head;
}

//insert at any k position (k -> n-(n+1))
Node* insertk(Node* head,int el, int k){
    if(head == NULL){
         if(k==1) return new Node(el);
         else return NULL;
    }
    if(k==1){
        Node* temp=new Node(el,head);
        return temp;
    }
    int cnt=0;
    Node* temp =head;
    while(temp != NULL){
        cnt++;
       if(cnt == k-1) {
        Node* x= new Node(el,temp->next);
        temp->next= x;
        break;
       }
       temp =temp->next;
    }
    return head;
}

//insert element before the value x
Node* insertval(Node* head,int el, int val){
    if(head == NULL){
        return NULL;
    }
    if(head->data == val){
        Node* temp=new Node(el,head);
        return temp;
    }

    Node* temp =head;
    while(temp->next != NULL){
       if(temp->next->data == val) {
        Node* x= new Node(el,temp->next);
        temp->next= x;
        break;
       }
       temp =temp->next;
    }
    return head;
}


int main(){
    vector<int> arr={12,5,8,7};
    Node* head=convertArr2LL(arr);
    head=inserttal(head , 100);
    //head =new Node(100,head); // direct without create function
    print(head);
}