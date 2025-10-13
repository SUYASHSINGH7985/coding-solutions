// question link: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/description/
class Solution
{
public:
    // Helper function to check if two strings are anagrams
    bool isAnagram(string a, string b)
    {
        if (a.size() != b.size())
            return false;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        return a == b;
    }

    vector<string> removeAnagrams(vector<string> &words)
    {
        vector<string> result;
        for (string &word : words)
        {
            if (!result.empty() && isAnagram(result.back(), word))
                continue; // skip if anagram of last word
            result.push_back(word);
        }
        return result;
    }
};