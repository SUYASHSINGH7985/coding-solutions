// question link: https://leetcode.com/problems/fraction-to-recurring-decimal/description/
class Solution
{
public:
    string fractionToDecimal(long long numerator, long long denominator)
    {
        if (numerator == 0)
            return "0";

        string result;

        // Sign
        if ((numerator < 0) ^ (denominator < 0))
            result += "-";

        // Convert to positive
        long long n = llabs(numerator);
        long long d = llabs(denominator);

        // Integer part
        result += to_string(n / d);
        long long rem = n % d;
        if (rem == 0)
            return result;

        result += ".";

        // Fractional part
        unordered_map<long long, int> mp; // remainder -> position in result string
        while (rem != 0)
        {
            if (mp.find(rem) != mp.end())
            {
                result.insert(mp[rem], "(");
                result += ")";
                break;
            }
            mp[rem] = result.size();
            rem *= 10;
            result += to_string(rem / d);
            rem %= d;
        }

        return result;
    }
};
