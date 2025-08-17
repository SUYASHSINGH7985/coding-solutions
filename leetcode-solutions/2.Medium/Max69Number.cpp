// LeetCode Problem: https://leetcode.com/problems/maximum-69-number/
// Approach: Convert the number to a string, finding the first 6, change it to '9', and convert back to an integer.
class Solution
{
public:
    int maximum69Number(int num)
    {
        string s = to_string(num);
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '6')
            {
                s[i] = '9';
                break;
            }
        }
        return stoi(s);
    }
};