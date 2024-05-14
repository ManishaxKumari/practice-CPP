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


