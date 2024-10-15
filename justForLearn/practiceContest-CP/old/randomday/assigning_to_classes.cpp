#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int h;
        cin >> h;
        vector<int> arr(2 * h);
        for (int i = 0; i < 2 * h; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int num1 = arr[h - 1];
        int num2 = arr[h];
        int AbDiff = abs(num1 - num2);
        cout << AbDiff;
    }
}