#include <bits/stdc++.h>
using namespace std;

//iterative code of binary search

int bs(vector<int> &nums,int target){
    int n=nums.size();
    int low=0;
    int high = n-1;
    while(low<=high){
        int mid= (low+high)/2;
        if(nums[mid]==target){
            return mid;
        }
        else if(nums[mid]>target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;

}

//recursive code

int bsr(vector<int> &nums,int low,int high,int target){
    if(low>high){
        return -1;
    }
    int mid=(low+high)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid]<target){
        return bsr(nums,mid+1,high,target);
    }
    return bsr(nums,low,mid-1,target);
}

 int search(vector<int>& nums, int target) {
        return(nums,0,nums.size()-1,target);
    }

    