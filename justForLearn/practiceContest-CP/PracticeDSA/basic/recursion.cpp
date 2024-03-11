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


//sum of first N number using recurssion (parameter way)
void printsum(int i,int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    printsum(i-1,sum+i);

}

//sum of first N number using recusion(functional way)
int printsum01(int n){
    if(n==0){
        return 0;
    }
    return n + printsum01(n-1);
}
//factorial of N using functional way in recursion

int printmulti(int n){
    if(n==1){
        return 1;
    }
    return n*printmulti(n-1);

}
//swap using two pointer in recursion
void swap01(int i,int arr[],int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    swap01(i+1,arr,n);
  
}


int main(){
    int n;
    // cout<<"enter number"<<" ";
    // cin>>n;
    //printn(1,n);
    //printrev(n,n);
    //printbt(n,n);
    //revPrintbt(1,n);
    //printsum(n,0);
    //cout<<printsum01(n)<<endl;
    //cout<<printmulti(n);
    cout<<"enter size of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        }
    swap01(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }
    
    return 0;
}