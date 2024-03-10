#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cout<<"enter your desired string"<<endl;
    cin>>s;

    //precompute
    int hash[26]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++ ; //s[i]-'a' is index
    }

    int q; 
    cout<<"enter number of char you want to check";
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        //fetch
        cout<< hash[c-'a']<<endl;
    }
    return 0;
}
