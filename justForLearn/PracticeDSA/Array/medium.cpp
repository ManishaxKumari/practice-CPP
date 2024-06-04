#include <bits/stdc++.h>
using namespace std;

//two sum problem 
//brute force solution
//return index
vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int m=0;
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){ 
                //if(i==j) continue; (use when j=0)(my solution)
                if(nums[i]+nums[j] == target){
                    m=i;
                    k=j;

                }
            }
        }
        return {m,k};
    }

//better solution with hash map //index
vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            int num= nums[i];
            int morenum= target - num;
            if(mpp.find(morenum) !=mpp.end()){
                return {mpp[morenum],i}; // return "yes";
            }
            mpp[num]=i;

        }
        return{-1,-1}; //return no;
    }

//optimal solution only for yes and no
string twoSum(int n, vector<int> &arr, int target) {
    sort(arr.begin(), arr.end());
    int left = 0, right = n - 1;
    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target) {
            return "YES";
        }
        else if (sum < target) left++;
        else right--;
    }
    return "NO";


    
}

//sort array of 0's,1's,2's //DNF algo //most optimal

void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0;
        int mid=0;
        int high=n-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++;
                mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid],nums[high]);
                high--;
            }

        }
    }


    //majority element // bettter solution
     int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;

        }
        for(auto it: mpp){
            if(it.second > (n/2)){
                return it.first; 
            }
        }
        return -1;
    }

    //moore voting algorithm for majority element
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int el;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=nums[i];
            }
            else if(nums[i]==el){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
           if(nums[i]==el){
            cnt1++;
           }

        }
        if(cnt1 > (n/2)){
            return el;
        }
        return -1;

    }


    //for make code fast
const int fast = [](){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    return 0;
}();