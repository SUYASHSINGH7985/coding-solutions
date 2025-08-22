// https://leetcode.com/problems/guess-number-higher-or-lower
// 374. Guess Number Higher or Lower
// Approach: Binary Search
// Time Complexity: O(log n)
// Space Complexity: O(1)
/**
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution
{
public:
    int guessNumber(int n)
    {
        int low = 1, high = n;
        while (low <= high)
        {
            int mid = low + (high - low) / 2; // avoid overflow
            int res = guess(mid);
            if (res == 0)
            {
                return mid; // found
            }
            else if (res < 0)
            {
                high = mid - 1; // too high
            }
            else
            {
                low = mid + 1; // too low
            }
        }
        return -1; // should not reach here
    }
};
