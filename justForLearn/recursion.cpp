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
    if(i>n){
        return;
    }
    cout<<n<<endl;
    printrev(1,n-1);
}
int main(){
    int n;
    cout<<"enter number"<<" ";
    cin>>n;
    // printn(1,n);
    printrev(1,n);

}
