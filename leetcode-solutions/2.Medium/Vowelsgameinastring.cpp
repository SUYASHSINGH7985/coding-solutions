// question link: https://leetcode.com/problems/vowels-game-in-a-string/description/

class Solution
{
public:
    bool isVowel(char c)
    {
        c = tolower(c);
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
    bool doesAliceWin(string s)
    {
        for (char c : s)
        {
            if (isVowel(c))
                return true; // Alice can make a move
        }
        return false; // No vowels, Alice cannot move
    }
};
