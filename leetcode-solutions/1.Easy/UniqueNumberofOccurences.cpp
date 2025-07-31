//Used unordered_map to count frequencies of elements
// Used unordered_set to ensure frequency uniqueness
//Time complexity: O(n), Space complexity: O(n)
// LeetCode problem: 1207. Unique Number of Occurrences
//wwww.leetcode.com/problems/unique-number-of-occurrences/
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
         unordered_map<int, int> freq;

    // Count frequencies of each number
    for (int num : arr) {
        freq[num]++;
    }

    unordered_set<int> seen;

    // Check if frequencies are unique
    for (auto& pair : freq) {
        if (seen.count(pair.second)) {
            return false;
        }
        seen.insert(pair.second);
    }

    return true;
}
    
};