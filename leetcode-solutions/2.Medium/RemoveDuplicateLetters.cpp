// LeetCode Problem: https://leetcode.com/problems/remove-duplicate-letters/
// Time Complexity: O(n)   — each character is pushed and popped from the result stack at most once
// Space Complexity: O(1)  — fixed size arrays for count and inResult (constant 256 size)

class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int> count(256, 0);        // count of each char
        vector<bool> inResult(256, false); // track if already in result stack

        // Count occurrences of each char
        for (char c : s) {
            count[c]++;
        }

        string result = ""; // acts like a stack

        for (char c : s) {
            count[c]--; // this char is now being processed

            if (inResult[c]) continue; // skip if already in result

            // Maintain lexicographic order: pop if top is bigger and still appears later
            while (!result.empty() && c < result.back() && count[result.back()] > 0) {
                inResult[result.back()] = false;
                result.pop_back();
            }

            result.push_back(c);
            inResult[c] = true;
        }

        return result;
    }
};
