#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> ans;
        int power =1;
        while(n>0){
            if( n%10 >0 ){
                ans.push_back((n%10)*power);
            }
            n=n/10;
            power =power*10;

        }
        cout<<ans.size()<<endl;
        for(auto number :ans){
            cout<<number<<" ";
            cout<<endl;
        }
    }


    return 0;
}