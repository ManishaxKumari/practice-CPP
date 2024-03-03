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
//O(n) 
void printAllDivisor01(int n){
    cout<<"enter number :";
    cin>>n;
    int i;
    for(i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }


}
//other way to find print all divisor(mathematical observation)
//in place of sqrt(n),we can write i*i<=n
//O(sqrt(n))
void printAllDivisor02(int n){
    cout<<"enter you digit :";
    cin>>n;
    vector<int> ls;
    for(int i=1;i*i<=n;i++){
        if(n%i == 0){
            ls.push_back(i);
            if((n/i)!= i){
                ls.push_back(n/i);
            }
        }
    }
    sort(ls.begin(),ls.end());
    for(auto it: ls){
        cout<<it<<" ";
    }

}
//Prime number check 
void prime(int n){
    cout<<"enter a number for prime check :";
    cin>>n;
    int count=0;
    for(int i=1;i*i<n;i++){
        if(n%i == 0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count == 2){
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
    //armstrong(n);
    //printAllDivisor02(n);
    prime(n);
}