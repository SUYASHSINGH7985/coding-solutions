// Approach:
// Just go through nums2 once, use a stack to keep track of bigger numbers.
// Make a map where each number knows its next bigger number.
// Then for nums1, just check the map and done.

// Time: O(n) — only one loop + lookups
// Space: O(n) — map and stack need space

// Question: https://leetcode.com/problems/next-greater-element-i/
class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int n = nums.size();
        int i = n - 2;

        // find first decreasing element from the right
        while (i >= 0 && nums[i] >= nums[i + 1])
            i--;

        if (i >= 0)
        {
            //  find element just larger than nums[i]
            int j = n - 1;
            while (nums[j] <= nums[i])
                j--;
            swap(nums[i], nums[j]);
        }

        // reverse the rest
        reverse(nums.begin() + i + 1, nums.end());
    }
};
