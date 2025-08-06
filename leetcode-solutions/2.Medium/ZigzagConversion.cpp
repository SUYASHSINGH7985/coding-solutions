// LeetCode Problem: Zigzag Conversion
// Input: string s = "PAYPALISHIRING", int numRows = 3
// Output: "PAHNAPLSIIGYIR"

// Approach:
// Simulate placing characters in a zigzag pattern row by row,
// then read them row by row.

class Solution {
public:
    string convert(string s, int numRows) {
        // Edge case: if only one row or the string is too short
        if (numRows == 1 || s.size() <= numRows) return s;

        // Create a vector of strings to represent each row
        vector<string> rows(min(numRows, int(s.size())));
        int currentRow = 0;
        bool goingDown = false;

        // Traverse the input string and place each character
        for (char c : s) {
            rows[currentRow] += c;

            // Flip direction when we reach top or bottom
            if (currentRow == 0 || currentRow == numRows - 1)
                goingDown = !goingDown;

            // Move up or down
            currentRow += goingDown ? 1 : -1;
        }

        // Combine all rows to get the final result
        string result;
        for (string row : rows)
            result += row;

        return result;
    }
};