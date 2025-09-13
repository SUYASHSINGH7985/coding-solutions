// question link:https://leetcode.com/problems/find-most-frequent-vowel-and-consonant/
class Solution
{
public:
    bool isVowel(char c)
    {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    int maxFreqSum(string s)
    {
        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }
        int maxVowel = 0;
        int maxConsonant = 0;

        for (auto &entry : freq)
        {
            char ch = entry.first;
            int count = entry.second;
            if (isVowel(ch))
            {
                maxVowel = max(maxVowel, count);
            }
            else
            {
                maxConsonant = max(maxConsonant, count);
            }
        }

        return maxVowel + maxConsonant;
    }
};