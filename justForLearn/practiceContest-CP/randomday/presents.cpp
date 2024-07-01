#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rg[n];
    int gg[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> rg[i];
    }

    int j;
    int index=0;
    for (int i = 1; i <= n; i++){
        for(int j=1;j<=n;j++){
            if(rg[j]==i){
                gg[i]=j;
            }
        }
            
        }
    for(int i=1;i<=n;i++){
        cout<<gg[i]<< " ";
    }

    return 0;
} 