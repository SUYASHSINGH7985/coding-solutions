// question link: https://leetcode.com/problems/replace-non-coprime-numbers-in-array/description/
class Solution
{
public:
    vector<int> replaceNonCoprimes(vector<int> &nums)
    {
        vector<int> st; // stack for results
        for (int num : nums)
        {
            st.push_back(num);
            // keep merging as long as last two are non-coprime
            while (st.size() > 1)
            {
                int a = st.back();
                int b = st[st.size() - 2];
                int g = gcd(a, b);
                if (g == 1)
                    break;                       // coprime → stop
                long long l = (1LL * a / g) * b; // lcm
                st.pop_back();
                st.back() = l; // replace with merged number
            }
        }
        return st;
    }
};
