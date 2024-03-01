#include<bits/stdc++.h>
using namespace std;


void extraction(int n){
    int d;
    cout<<"enter number : ";
    cin>>n;
    while(n>0){
        d=n%10;
        cout<<d<<endl;
        n=n/10;
        
    }
}
void count_digit01(int n){
    cout<<"enter number: "<<endl;
    cin>>n;
    int count=0;
        while(n>0){
            n=n/10;
            count++;
        }
    cout<<"number of digit: "<<count;
       
}
//using log how to count digit
void count_digit02(int n){
    int count = (int)(log10(n)+1);
    cout<<"number of digit: "<<count;
}
void reverse_digit(int n){
    int revnum=0;
    int lastdigit;
    cout<<"enter your number: ";
    cin>>n;
    while(n>0){
        lastdigit=n%10;
        n=n/10;
        revnum=((revnum*10)+ lastdigit);
        }
        cout<<revnum;
}
void palindrome(int n){
    cout<<"enter number :";
    cin>>n;
    int x=n;
    int revnum=0;
    while(n>0){
        int ld=n%10;
        n=n/10;
        revnum=(revnum*10)+ld;
        }
    if(x == revnum){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
void armstrong(int n){
    cout<<"enter number : ";
    cin>>n;
    int x=n;
    int sum=0;
    
    while(n>0){
        int ld=n%10;
        n=n/10;
        sum= sum + (ld*ld*ld);
        }
    if(sum == x){
        cout<<"yes";
    }
    else{
        cout<<"no";
    }
}
int main(){
   int n;
    //extraction(n);
    //count_digit01(n);
    //reverse_digit(n);
    //palindrome(n);
    armstrong(n);
}