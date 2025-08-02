// LeetCode: https://leetcode.com/problems/power-of-two/
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0) return false;
        while(n % 2 == 0) {
            n = n / 2;
        }
        return n == 1;
    }
};
