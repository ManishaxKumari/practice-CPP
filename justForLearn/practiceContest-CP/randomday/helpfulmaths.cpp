#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<int> nums;

    for(char c : s){
        if(c == '1' || c == '2' || c == '3'){
            nums.push_back(c - '0'); // Convert character to integer
        }
    }

    sort(nums.begin(), nums.end());

    for(int i = 0; i < nums.size(); i++){
        if(i > 0) cout << "+";
        cout << nums[i];
    }

    return 0;
}