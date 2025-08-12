/*
Question: https://leetcode.com/problems/divide-array-into-equal-pairs/

Intuition:
If we want to divide an array into pairs of equal numbers, 
then every number must appear an even number of times. 
If even one number appears an odd number of times, 
there will always be one leftover, and pairing becomes impossible.

Approach:
1. Go through the array and count how many times each number appears 
   (using an unordered_map for fast lookups).
2. Check every count:
   - If any count is odd → return false.
   - If all counts are even → return true.

Time Complexity: O(n) — one pass to count, one pass to check.
Space Complexity: O(k) — where k is the number of unique numbers.*/

class Solution{
public:

bool divideArray(vector<int>& nums) {
    unordered_map<int, int> freq;
    
    // Step 1: Count frequency of each number
    for (int num : nums) {
        freq[num]++;
    }
    
    // Step 2: Check if all counts are even
    for (auto& [num, count] : freq) {
        if (count % 2 != 0) {
            return false; // Found an odd count cannot pair
        }
    }
    
    return true; // All counts even can pair
}
};