// Question Link: https://leetcode.com/problems/restore-ip-addresses/
// approach: Backtracking
// Time Complexity O(1),Since the number of valid IP addresses is limited
// Space Complexity O(1),The recursion stack and path storage is limited by the
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<string> res;

    vector<string> restoreIpAddresses(string s)
    {
        backtrack(s, 0, {}, 0);
        return res;
    }

private:
    void backtrack(const string &s, int start, vector<string> path, int parts)
    {
        // if 4 parts are made and string is fully used
        if (parts == 4 && start == s.size())
        {
            string ip = path[0];
            for (int i = 1; i < 4; i++)
                ip += "." + path[i];
            res.push_back(ip);
            return;
        }

        // stop if parts exceed 4
        if (parts >= 4)
            return;

        // take 1 to 3 digits
        for (int len = 1; len <= 3 && start + len <= s.size(); len++)
        {
            string segment = s.substr(start, len);

            // skip if leading zero
            if (segment.size() > 1 && segment[0] == '0')
                continue;

            // skip if greater than 255
            int val = stoi(segment);
            if (val > 255)
                continue;

            path.push_back(segment);
            backtrack(s, start + len, path, parts + 1);
            path.pop_back();
        }
    }
};
