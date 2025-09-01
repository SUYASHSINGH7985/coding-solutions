// question link: https://leetcode.com/problems/regular-expression-matching/
// approach: dynamic programming

class Solution
{
public:
    bool isMatch(string s, string p)
    {
        const int MAX = 21;
        bool dp[MAX][MAX] = {false};

        int m = s.length();
        int n = p.length();

        dp[0][0] = true;
        for (int j = 2; j <= n; ++j)
        {
            if (p[j - 1] == '*')
            {
                dp[0][j] = dp[0][j - 2];
            }
        }
        for (int i = 1; i <= m; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (p[j - 1] == s[i - 1] || p[j - 1] == '.')
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else if (p[j - 1] == '*')
                {

                    dp[i][j] = dp[i][j - 2];

                    if (p[j - 2] == s[i - 1] || p[j - 2] == '.')
                    {
                        dp[i][j] = dp[i][j] || dp[i - 1][j];
                    }
                }
            }
        }

        return dp[m][n];
    }
};
