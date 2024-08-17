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
        vector<int> arr;
        for (int i = 0; i < 2 * h; i++)
        {
            int s;
            cin >> s;
            arr.push_back(s);
        }
        sort(arr.begin(), arr.end());
        int num1 = arr[h];
        int num2 = arr[h + 1];
        int AbDiff = abs(num1 - num2);
        cout << AbDiff;
    }
}