#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int digit1 = s[0] - '0'; // Convert char to int
        if (digit1 !=9 && digit1>=5) {
            digit1 = 9 - digit1;
            s[0] = digit1 + '0'; // Convert int back to char
        }
    
   
    for (int i = 1; i < s.size(); i++) {
        int digit2 = s[i] - '0'; // Convert char to int
        if (digit2 >= 5) {
            digit2 = 9 - digit2;
            s[i] = digit2 + '0'; // Convert int back to char
        }
    } 
    cout << s;

    return 0;
}

