#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        char str[n][m];
        int x = 0, y = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> str[i][j];
            }
        }

        for (int i = 0; i < n - 1; i++)
        {
            if (str[i][m - 1] == 'R')
            {
                x++;
            }
        }

        for (int j = 0; j < m - 1; j++)
        {
            if (str[n - 1][j] == 'D')
            {
                y++;
            }
        }

        cout << x + y << endl;
    }
}
