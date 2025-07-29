// Problem: Reverse Integer
// Link: https://leetcode.com/problems/reverse-integer/
// Approach: Digit extraction + Overflow check
// Time Complexity: O(log n)
// Space Complexity: O(1)

class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        while(x != 0){
            int digits = x % 10;
            if(rev > INT_MAX / 10 || rev < INT_MIN / 10){
                return 0;
            }
            rev = rev * 10 + digits;
            x = x / 10;
        }
        return rev;
    }
};
