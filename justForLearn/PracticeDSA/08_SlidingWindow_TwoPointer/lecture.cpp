#include <bits/stdc++.h>
using namespace std;

// constant window -given array and a interger k ,figure out maximum sum that you can obtain by picking up four element consertive
void Maximumsum(int arr[], int k, int n)
{
    int maxsum = 0;
    int l = 0;
    int r = k - 1;
    int sum = 0;
    for (int i = 0; i <= r; i++)
    {
        sum = sum + arr[i];
        while (r < n - 1)
        {
            sum = sum - arr[l];
            l++;
            r++;
            sum = sum + arr[r];
            maxsum = max(maxsum, sum);
        }
    }
}

// longest subarray/substring -- given array and interger k , subarray which sum =<k

void longestsubarray()
{
}