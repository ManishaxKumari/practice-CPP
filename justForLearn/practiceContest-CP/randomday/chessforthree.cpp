#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int p1, p2, p3;
        cin >> p1 >> p2 >> p3;
        
        // Check the total points
        int total_points = p1 + p2 + p3;
        
        if (total_points % 2 != 0) {
            // If the total points are odd, it's impossible
            cout << -1 << endl;
            continue;
        }
        
        // Calculate number of games
        int total_games = (p1 + p2 + p3) / 2;
        
        // Check if the given scores are possible
        int max_possible_score_p1 = 2 * total_games;
        int max_possible_score_p2 = 2 * total_games;
        int max_possible_score_p3 = 2 * total_games;
        
        if (p1 > max_possible_score_p1 || p2 > max_possible_score_p2 || p3 > max_possible_score_p3) {
            cout << -1 << endl;
            continue;
        }
        
        // Calculate the maximum number of draws
        int max_draws = total_games - ((p3 - p2) + (p2 - p1)) / 2;
        
        // Ensure the scores match the condition p1 ≤ p2 ≤ p3
        if (p1 > p2 || p2 > p3) {
           // cout << -1 << endl;
        } else {
            //cout << max_draws << endl;
        }
    }
    
    return 0;
}
