#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int n = word1.size();
        int m = word2.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, -1)); // memo table
        return solve(word1, word2, n, m, dp);
    }

private:
    int solve(string &s1, string &s2, int n, int m, vector<vector<int>> &dp)
    {
        if (n == 0)
            return m;
        if (m == 0)
            return n;

        if (dp[n][m] != -1)
            return dp[n][m]; // return cached result

        if (s1[n - 1] == s2[m - 1])
        {
            dp[n][m] = solve(s1, s2, n - 1, m - 1, dp);
        }
        else
        {
            dp[n][m] = 1 + min({
                               solve(s1, s2, n - 1, m, dp),    // delete
                               solve(s1, s2, n, m - 1, dp),    // insert
                               solve(s1, s2, n - 1, m - 1, dp) // replace
                           });
        }
        return dp[n][m];
    }
};
