// Leetcode link: https://leetcode.com/problems/multiply-strings/
// Approach:first check if either string is "0", return "0" if true.
// Then, use two nested loops to multiply each digit of num1 with each digit of num2.
// instead of converting int first, we can also work directly with characters by using ASCII values.
// Time complexity: O(n * m), where n and m are the lengths of num1 and num2.
/*## Learnings from String Multiplication Problem
1. Learned how characters map to ASCII values ('0' = 48).
2. Understood why we subtract `'0'` when converting char → int.*/

class Solution
{
public:
    string multiply(string num1, string num2)
    {
        int n = num1.size();
        int m = num2.size();
        if (num1 == "0" || num2 == "0")
        {
            return "0";
        }
        vector<int> result(n + m, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = m - 1; j >= 0; j--)
            {
                int c1 = num1[i] - '0';
                int c2 = num2[j] - '0';
                int mul = c1 * c2;
                int sum = mul + result[i + j + 1];
                result[i + j + 1] = sum % 10;
                result[i + j] += sum / 10;
            }
        }
        string ans = "";
        for (int num : result)
        {
            if (!(ans.empty() && num == 0))
            {
                ans.push_back(num + '0');
            }
        }
        return ans.empty() ? "0" : ans;
    }
};