// Question: https://leetcode.com/problems/is-subsequence/
// Approach: Use two pointers to traverse both strings, incrementing the pointer for s when a match is found in t.
class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int i = 0, j = 0;
        while (i < s.size() && j < t.size())
        {
            if (s[i] == t[j])
            {
                i++;
            }
            j++;
        }
        return i == s.size();
    }
};
