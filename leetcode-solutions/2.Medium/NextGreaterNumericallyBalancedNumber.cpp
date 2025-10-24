class Solution
{
public:
    int nextBeautifulNumber(int n)
    {
        // Start checking from n+1
        for (int num = n + 1; num <= 2000000; num++)
        { // upper limit safe
            if (isBalanced(num))
                return num;
        }
        return -1;
    }

private:
    bool isBalanced(int num)
    {
        string s = to_string(num);
        unordered_map<char, int> freq;

        for (char c : s)
        {
            if (c == '0')
                return false; // 0 cannot appear
            freq[c]++;
        }

        for (auto &p : freq)
        {
            if (p.second != p.first - '0')
                return false;
        }

        return true;
    }
};