#include <bits/stdc++.h>
using namespace std;

void quickSort(int arr[], int low, int high)
    {
        if(low<high){
            int pindex=partition(arr,low,high);
            quickSort(arr,low,pindex-1);
            quickSort(arr,pindex+1,high);
        }

    }

    int partition (int arr[], int low, int high)
    {
       int pivot=arr[low];
       int i=low;
       int j=high;
       
       while(i<j){
           while(arr[i]<=pivot && i<=high-1){
               i++;
           }
           while(arr[j]>pivot && j>=low+1){
               j--;
           }
           if(i<j){
               int temp=arr[j];
               arr[j]=arr[i];
               arr[i]=temp;
           }
           
       }
       
       int temp1=arr[low];
       arr[low]=arr[j];
       arr[j]=temp1;
       
       return j;
    }