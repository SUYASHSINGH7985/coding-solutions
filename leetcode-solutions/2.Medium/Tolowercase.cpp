// LeetCode: https://leetcode.com/problems/to-lower-case/
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    string toLowerCase(string s) {
        for (char &c : s) 
            c = tolower(c);
        return s;
    }
};
