#include<bits/stdc++.h>
using namespace std;

int cnt=0; //global variable
void print(){
    if(cnt==4){
        return;
    }
    cout<<cnt<<endl;
    cnt++;
    print();
}

//print name N time using recurssion 
void printName(int i,int n){
    if(i>n){
        return;
    }
    cout<<"raj"<<endl;
    printName(i+1,n);
}

// int main(){
//     int n;
//     cout<<"enter number of time"<<endl;
//     cin>>n;
//     printName(1,n);
// }

// print number n times using recursion
void printn(int i,int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    printn(i+1,n);
}

//print number n time in reverse order using recursion

void printrev(int i,int n){
    if(i<1){
        return;
    }
    cout<<i<<endl;
    printrev(i-1,n);
}

// use-backtracking for print 1 to N
void printbt(int i,int n){
    if(i<1){
        return;
    }
    printbt(i-1,n);
    cout<<i<<endl;
}

//use-backtracking for print n to 1
void revPrintbt(int i,int n){
    if(i>n){
        return;
    }
    revPrintbt(i+1,n);
    cout<<i<<endl;
}

int main(){
    int n;
    cout<<"enter number"<<" ";
    cin>>n;
    // printn(1,n);
    //printrev(n,n);
    //printbt(n,n);
    //revPrintbt(1,n);

}
