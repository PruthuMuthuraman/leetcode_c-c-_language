#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Fix: Use logical && and change return value to INT_MAX
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX; 
        }
        
        int ans = dividend / divisor;
        return ans;
    }
};
