#include <bits/stdc++.h>
using namespace std;

void selection_sort01(int arr[],int n){
    for(int i=0;i<n-2;i++){
        int mini=i;
        for(int j=i;j<n-1;j++){
            if(arr[j]<arr[mini]){
                mini=j;
            }
        }
        int temp= arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;

    }
}

void selectionSort02(int arr[], int n)
    {
       for(int i=0;i<n-1;i++){
           int mini=i;
           for(int j=i+1;j<n;j++){
               if(arr[j]<arr[mini]){
                   mini=j;
               }
           }
               int temp=arr[mini];
               arr[mini]=arr[i];
               arr[i]=temp;
           
       }
    }

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        int didswap=0;
        for(int j=0;j<=i-1;j++){  //use i instead of (i-1) in gg for run code
            if (arr[j]>arr[j+1]){
               int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp; 
                didswap=1;
            }
        }
        if(didswap==0){
            break;
        }
    }
}
void insertion_sort(int arr[],int n){
   for(int i=0;i<=n-1;i++){
    int j=i;
    while(j>0 && arr[j-1]>arr[j]){
        int temp= arr[j-1];
        arr[j-1]=arr[j];
        arr[j]=temp; 

        j--;
    }
     

   }
}

int main(){
    //take array from user
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    cout<<"enter array element"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //sort 
    // selection_sort(arr,n);
    //bubble_sort(arr,n);
    insertion_sort(arr,n);
    //print array after sort
    cout<<"your sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}