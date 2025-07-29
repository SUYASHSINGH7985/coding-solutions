// Problem: Buddy Strings
// Link: https://leetcode.com/problems/buddy-strings/
// Approach: 
// - If strings are equal, check for duplicate characters (can swap same character)
// - If not equal, find two mismatched positions and check if swapping makes strings equal
// Time Complexity: O(n)
// Space Complexity: O(1)
class Solution {
public:
    bool buddyStrings(string s, string goal) {
        // Step 1: Lengths must match
        if(s.length() != goal.length())
            return false;

        // Step 2: If both strings are already equal
        if (s == goal) {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
                if (freq[c - 'a'] > 1)
                    return true; // Found a duplicate character to swap
            }
            return false; // No duplicates → no valid swap
        }

        // Step 3: Find mismatched characters
        vector<int> diff;
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != goal[i])
                diff.push_back(i);
        }

        // Step 4: Exactly two mismatches must swap to match
        return diff.size() == 2 &&
               s[diff[0]] == goal[diff[1]] &&
               s[diff[1]] == goal[diff[0]];
    }
};
