// Question Link: https://leetcode.com/problems/minimum-number-of-people-to-teach/
// approach: Simulation + Hashing
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int minimumTeachings(int n, vector<vector<int>> &languages, vector<vector<int>> &friendships)
    {
        int m = languages.size();

        // store languages each user knows (for fast lookup)
        vector<unordered_set<int>> knows(m);
        for (int i = 0; i < m; i++)
        {
            for (int lang : languages[i])
            {
                knows[i].insert(lang);
            }
        }

        // collect users in "broken" friendships
        unordered_set<int> usersToFix;
        for (auto &f : friendships)
        {
            int u = f[0] - 1, v = f[1] - 1;
            bool canCommunicate = false;
            for (int lang : knows[u])
            {
                if (knows[v].count(lang))
                {
                    canCommunicate = true;
                    break;
                }
            }
            if (!canCommunicate)
            {
                usersToFix.insert(u);
                usersToFix.insert(v);
            }
        }

        // if no broken friendships, answer is 0
        if (usersToFix.empty())
            return 0;

        int ans = INT_MAX;

        // try teaching each language
        for (int lang = 1; lang <= n; lang++)
        {
            int count = 0;
            for (int u : usersToFix)
            {
                if (!knows[u].count(lang))
                {
                    count++;
                }
            }
            ans = min(ans, count);
        }
        return ans;
    }
};
