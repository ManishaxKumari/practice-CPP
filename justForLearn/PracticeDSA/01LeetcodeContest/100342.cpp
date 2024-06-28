#include <bits/stdc++.h>
using namespace std;

double minimumAverage(vector<int>& nums) {
        int n=nums.size();
        vector<float> average={};
        sort(nums.begin(),nums.end());
        int i,j;
        for(int i=0, j=n-1;i<n,j>=0;i++,j--){
            average[i]= (nums[i] + nums[j])/2;

        }
        int n1=average.size();
        return average[n1-1];
    }
