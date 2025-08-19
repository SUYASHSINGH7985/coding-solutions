// LeetCode Problem: https://leetcode.com/problems/difference-between-odd-and-even-frequencies/
// Approach:first calculate max and min frequence of odd and even no times the character is appearing and then return the difference.
// Time complexity: O(n)
// Space complexity: O(1), since we are using a fixed size array for frequency count.
class Solution
{
public:
    int maxDifference(string s)
    {
        int freq[256] = {0};
        for (char c : s)
        {
            freq[(int)c]++;
        }
        int maxfodd = 0;
        int mineven = INT_MAX;
        for (int i = 0; i < 256; i++)
        {
            if (freq[i] > 0)
            {
                if (freq[i] % 2 == 0)
                { // even freq
                    mineven = min(mineven, freq[i]);
                }
                else
                { // odd freq
                    maxfodd = max(maxfodd, freq[i]);
                }
            }
        }
        if (maxfodd == 0 || mineven == INT_MAX)
            return -1;
        return maxfodd - mineven;
    }
};
