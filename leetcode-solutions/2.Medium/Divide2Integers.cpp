// Leetcode Problem: 29. Divide Two Integers
// Link: https://leetcode.com/problems/divide-two-integers/

#include <climits>

class Solution {
public:
    int divide(int dividend, int divisor) {
        // Edge case: overflow if result exceeds INT_MAX
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        
        return dividend / divisor;
    }
};
