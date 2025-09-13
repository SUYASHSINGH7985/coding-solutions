// question link: https://leetcode.com/problems/sort-vowels-in-a-string/
class Solution
{
public:
    bool isVowel(char c)
    {
        char lower = tolower(c);
        return lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u';
    }

    string sortVowels(string s)
    {
        vector<char> vowels;

        // Collect vowels
        for (char c : s)
        {
            if (isVowel(c))
                vowels.push_back(c);
        }

        // Sort vowels by ASCII
        sort(vowels.begin(), vowels.end());

        // Replace vowels in order
        int idx = 0;
        for (char &c : s)
        {
            if (isVowel(c))
            {
                c = vowels[idx++];
            }
        }

        return s;
    }
};