#include <bits/stdc++.h>
using namespace std;


string countd (string s){
    int cnt=1;
    for(int i=1;i<=s.size();i++){
        if(s[i-1]==s[i]){
            cnt++;
            if(cnt==7){
                return "YES";
            }
        }
        else {
           cnt=1;
        }
    }
    return "NO";
}

int main(){
    string s;
    cin>>s;
    string result =countd(s);
    cout<<result;

    return 0;
}