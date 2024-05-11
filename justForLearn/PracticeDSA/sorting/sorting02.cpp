#include <bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
        }
    }


}

void merge_sort(vector<int> &arr,int low,int high){
    if(low == high){
        return;
    }
    int mid=(low + high)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);


}