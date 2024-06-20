#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt_x=0;
    int cnt_y=0;
    int cnt_z=0;
    while(n--){
        int x,y,z;
        cin>>x>>y>>z;
        cnt_x=cnt_x+x;
        cnt_y=cnt_y+y;
        cnt_z=cnt_z+z;
    }
        if(cnt_x==0 && cnt_y==0 && cnt_z==0){
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
    

    return 0;
}