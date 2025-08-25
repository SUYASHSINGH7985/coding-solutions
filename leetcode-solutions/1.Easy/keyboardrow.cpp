// Question Link: https://leetcode.com/problems/keyboard-row/
// approach: Hashing
// Time Complexity O(N*M)
class Solution
{
public:
    vector<string> findWords(vector<string> &words)
    {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";

        vector<unordered_set<char>> rows = {
            unordered_set<char>(row1.begin(), row1.end()),
            unordered_set<char>(row2.begin(), row2.end()),
            unordered_set<char>(row3.begin(), row3.end())};

        vector<string> result;

        for (auto &word : words)
        {
            string lower = word;
            transform(lower.begin(), lower.end(), lower.begin(), ::tolower);

            for (auto &row : rows)
            {
                if (all_of(lower.begin(), lower.end(),
                           [&](char c)
                           { return row.count(c); }))
                {
                    result.push_back(word);
                    break; // already valid in one row
                }
            }
        }
        return result;
    }
};
