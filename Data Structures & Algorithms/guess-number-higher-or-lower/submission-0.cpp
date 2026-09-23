/** * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 * otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1; // Numbers start from 1
        int r = n;
        
        while (l <= r) { // Use <= to ensure we check the last remaining number
            int m = l + (r - l) / 2; // Prevents overflow
            int res = guess(m);
            
            if (res == 0) {
                return m;
            } else if (res == -1) {
                r = m - 1; // Guess was too high, look lower
            } else {
                l = m + 1; // Guess was too low, look higher
            }
        }
        
        return l; // Fallback
    }
};