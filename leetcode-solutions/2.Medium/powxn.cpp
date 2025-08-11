/*
LeetCode Problem: 50. Pow(x, n)
https://leetcode.com/problems/powx-n/

Time Complexity:  O(log n)
- Because the exponent is halved each iteration in fast exponentiation.

Space Complexity: O(1)
- Uses constant extra space.
*/

class Solution {
public:
    double myPow(double x, int n) {
        // Handle INT_MIN explicitly because -INT_MIN overflows
        long long N = n;  // Use long long to avoid overflow
        if (N < 0) {
            N = -N;
            x = 1.0 / x;
        }
        
        double result = 1.0;
        double base = x;
        
        while (N > 0) {
            if (N % 2 == 1) {
                result *= base;
            }
            base *= base;
            N /= 2;
        }
        
        return result;
    }
};
