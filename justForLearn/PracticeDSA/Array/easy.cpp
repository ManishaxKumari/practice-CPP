#include <bits/stdc++.h>
using namespace std;

//largest element in a array (optimal solution)
int largest(vector<int> &arr, int n)
    {
        int largest = arr[0];
        for(int i=0;i<n;i++){
            if(arr[i]>largest){
                largest=arr[i];
            }
        }
        return largest;
    }

//second largest element (optimal solution)
int print2ndlargest(int arr[], int n) {
	    int largest =arr[0];
	    int slargest=-1;
	    for(int i=1;i<n;i++){
	        if(arr[i]>largest && arr[i]!=largest){
	            slargest=largest;
	            largest=arr[i];
	        }
	        else if(arr[i]>slargest && arr[i]<largest){
	            slargest=arr[i];
	        }
	    }
	    return slargest;
	    
        
	}

//second smallest element (optimal solution)
int print2ndsmallest(vector<int> &arr,int n){
    int smallest=arr[0];
    int ssmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest && arr[i]!=smallest){
            ssmallest=smallest;
            smallest=arr[i];
        }
        else if(arr[i]!=smallest && arr[i<ssmallest]){
            ssmallest=arr[i];
        }
    }

    return ssmallest;


}

bool sortcheck(vector<int>& nums,int n) {
       for(int i=1;i<n;i++){
        if(nums[i]>=nums[i-1]){

        }
        else{
            return false;
        }
       }
       return true;
    }

int removeDuplicates(vector<int>& nums) {
      int i=0;
      for(int j=1;j<nums.size();j++){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;
        }
      }
      return i+1; 
    }

//left rotate array by one place 

