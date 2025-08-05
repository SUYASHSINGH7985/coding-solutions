// LeetCode Link: https://leetcode.com/problems/top-k-frequent-elements/
// Time Complexity: O(n), where n is the size of the input array `nums`
// Space Complexity: O(n), for the frequency map and bucket storage

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq; // count frequency of each element
        for (int i = 0; i < nums.size(); ++i) {
            freq[nums[i]]++;
        }

        // Create buckets where index represents frequency
        vector<vector<int>> bucket(nums.size() + 1);
        for (pair<int, int> it : freq) {
            bucket[it.second].push_back(it.first);
        }

        // Collect top k frequent elements
        vector<int> result;
        for (int i = nums.size(); i >= 0 && result.size() < k; --i) {
            for (int num : bucket[i]) {
                result.push_back(num);
                if (result.size() == k) break;
            }
        }

        return result;
    }
};
