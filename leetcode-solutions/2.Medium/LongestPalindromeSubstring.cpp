// LeetCode problem: 5. Longest Palindromic Substring
// https://leetcode.com/problems/longest-palindromic-substring/
/*Approach:
  Expand Around Center – We treat every character (and the space between two characters)
  as the center of a potential palindrome and expand outward to find the longest one. 
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)*/
// LeetCode problem: 5. Longest Palindromic Substring
// https://leetcode.com/problems/longest-palindromic-substring/
class Solution {
public:
   string longestPalindrome(string s) {
        if (s.empty() || s.length() < 1) return "";

        int start = 0, end = 0;

        for (int i = 0; i < s.length(); i++) {
            int len1 = expandFromCenter(s, i, i);       // Odd length
            int len2 = expandFromCenter(s, i, i + 1);   // Even length
            int len = max(len1, len2);

            if (len > (end - start)) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }

private:
    int expandFromCenter(string& s, int left, int right) {
        while (left >= 0 && right < s.length() && s[left] == s[right]) {
            left--;
            right++;
        }
        return right - left - 1;
    }
};