#include <bits/stdc++.h>
using namespace std;

void selection_sort(int arr[],int n){
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
void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--){
        for(int j=i;j<=i-1;j++){
            if (arr[j]>arr[j+1]){
               int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp; 
                
            }
        }
    }
}
//jj



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
    selection_sort(arr,n);
    //print array after sort
    cout<<"your sorted array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}