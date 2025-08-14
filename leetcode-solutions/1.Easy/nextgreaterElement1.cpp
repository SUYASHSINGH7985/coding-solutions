// Approach:
// 1. Traverse nums2 from right to left using a stack to store "next greater" for each element.
// 2. Store results in a map for quick lookup.
// 3. For each element in nums1, get answer from map.
// Time Complexity: O(n + m)  (n = nums2.size(), m = nums1.size())
// Space Complexity: O(n)
// Problem Link: https://leetcode.com/problems/next-greater-element-i/
class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_map<int, int> nextGreater;
        stack<int> st;

        for (int num : nums2)
        {
            while (!st.empty() && num > st.top())
            {
                nextGreater[st.top()] = num;
                st.pop();
            }
            st.push(num);
        }
        while (!st.empty())
        {
            nextGreater[st.top()] = -1;
            st.pop();
        }

        vector<int> ans;
        for (int num : nums1)
        {
            ans.push_back(nextGreater[num]);
        }
        return ans;
    }
};