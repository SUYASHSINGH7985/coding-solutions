// Leetcode Problem: 1002. Find Common Characters
// Link: https://leetcode.com/problems/find-common-characters/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        // Initialize with maximum possible frequency for each character
        vector<int> minFreq(26, INT_MAX);

        // Count frequency of each character in each word
        for (const string& word : words) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            // Update minFreq with the minimum frequency seen so far
            for (int i = 0; i < 26; ++i) {
                minFreq[i] = min(minFreq[i], freq[i]);
            }
        }

        // Collect characters that are common in all strings
        vector<string> result;
        for (int i = 0; i < 26; ++i) {
            while (minFreq[i]-- > 0) {
                result.push_back(string(1, 'a' + i));
            }
        }

        return result;
    }
};

// Example usage
int main() {
    vector<string> words = {"bella", "label", "roller"};
    Solution sol;
    vector<string> res = sol.commonChars(words);

    for (const string& s : res) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
