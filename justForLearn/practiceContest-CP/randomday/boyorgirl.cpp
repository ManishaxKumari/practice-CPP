#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    set<char> st;
    for (int i = 0; i < s.size(); i++) {
        st.insert(s[i]);
    }
    int n=st.size();
    if(n%2 == 0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
    return 0;
} 