// LeetCode Solutions
// Problem: Power of Three
// Difficulty: Easy
// Approach: if n is less than or equal to 0, return false.
// Otherwise, calculate the logarithm of n base 3 and check if it is an integer.
// time complexity: O(1)
// space complexity: O(1)

class Solution
{
public:
    bool isPowerOfThree(int n)
    {
        if (n <= 0)
            return false;
        double x = log10(n) / log10(3);
        return fabs(x - round(x)) < 1e-10;
    }
};
