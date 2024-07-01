// https://codeforces.com/problemset/problem/1095/A

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    string res = "";
    int count = 1;
    int i = 0;
    while (i < n)
    {
        res.push_back(s[i]);
        i = i + (count++);
    }
    cout << res;
    return 0;
}