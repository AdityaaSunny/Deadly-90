#include <iostream>
#include <vector>
#include <numeric> // for accumulate
using namespace std;
 bool beats(char a, char b) {
        if (a == 'F' && b == 'W') return true;  // Fire beats Water
        if (a == 'W' && b == 'E') return true;  // Water beats Earth
        if (a == 'E' && b == 'F') return true;  // Earth beats Fire
        return false;
    }
int countWinningSequences(string s) {
        int n = s.length();
        if (n < 2) return 0;  // Not enough moves for a valid game
        
        int aliceWins = 0;  // Count Alice's wins
        
        // Iterate through the string, alternating between Alice and Bob
        for (int i = 1; i < n; i += 2) {
            char aliceMove = s[i - 1];  // Alice's move
            char bobMove = s[i];        // Bob's move
            
            // Check if Bob's move is invalid (same as his previous move)
            if (i > 1 && bobMove == s[i - 2]) {
                // Bob played the same move twice in a row, skip this round
                continue;
            }
            
            // Check who wins between Alice (aliceMove) and Bob (bobMove)
            if (beats(aliceMove, bobMove)) {
                aliceWins++;  // Alice wins this round
            }
        }
        
        return aliceWins;
    } 
    
    // Helper function to determine if a creature beats another
   

// Helper function to determine if a creature beats another

int main()
{
    string s = "FWEFW";
    cout << countWinningSequences(s);
}