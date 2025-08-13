/*
Problem: Remove All Adjacent Duplicates in a String
Link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/
Approach:
1. Use a stack to keep track of characters.
2. Traverse the string:
    If the current character is the same as the top of the stack, pop the stack (remove duplicate).
    Otherwise, push the character onto the stack.
3. Reconstruct the string from the stack (it will be in reverse order).
Complexity:
Time:O(n),each character is pushed/popped at most once
Space:O(n), stack may store up to n characters
*/

class Solution
{
public:
    string removeDuplicates(string s)
    {
        stack<char> st;

        for (char c : s)
        {
            if (!st.empty() && st.top() == c)
            {
                st.pop(); // remove the duplicate
            }
            else
            {
                st.push(c); // add current character
            }
        }

        // Reconstruct the result from the stack
        string result = "";
        while (!st.empty())
        {
            result = st.top() + result;
            st.pop();
        }
        return result;
    }
};