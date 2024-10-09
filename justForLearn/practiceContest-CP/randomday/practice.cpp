// #include <bits/stdc++.h>
//         using namespace std;
        
//         int main() {
//             vector<int> v = {10, 20, 30};
//            cout << "Back element: " << v.back()<<endl;
//             for (int i : v) {
//                 cout << i << " ";
//             }
//             return 0;

//         }
#include <iostream>
using namespace std;

int main() {
    int k, n;
    
    // Input values for k and n
    cout << "Enter the value of k: ";
    cin >> k;
    cout << "Enter the value of n: ";
    cin >> n;
    
    // Modulo operation
    k = k % n;
    
    // Output the result
    cout << "k % n = " << k << endl;
    
    return 0;
}
