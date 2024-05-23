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

//Find First and Last Position of Element in Sorted Array (occuranece)
vector<int> searchRange(vector<int>& nums, int target) {
        int lb =lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub =upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        int n=nums.size();

        if(lb==n || nums[lb]!=target){
            return {-1,-1};
        }
        return {lb,ub-1};
    }

    // in pure binary solution
    int firsto(vector<int> &arr,int target){
        int n=arr.size();
        int first =-1;
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]==target){
                first=mid;
                high=mid-1;
            }
            else if(arr[mid]<target){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return first;
    }
    
    int lasto(vector<int> &arr,int target){
            int n=arr.size();
            int last =-1;
            int low=0;
            int high=n-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(arr[mid]==target){
                    last=mid;
                    low=mid+1;
                }
                else if(arr[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return last;
        }
        



    vector<int> searchRange(vector<int>& nums, int target) {
     int first=firsto(nums,target);
     if(first==-1) return {-1,-1};
     int last =lasto(nums,target);
     return {first,last};

    }

    