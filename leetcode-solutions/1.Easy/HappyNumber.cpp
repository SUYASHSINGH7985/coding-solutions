// LeetCode: 202. Happy Number
// Approach: Multiply each input by itself, sum squares of digits, repeat until 1 or loop detected
// Problem Link: https://leetcode.com/problems/happy-number/
class Solution {
public:
    bool isHappy(int n) {
     unordered_set<int> seen;

        while (n != 1 && !seen.count(n)) {
            seen.insert(n);
            n = getNext(n);
        }

        return n == 1;
    }

private:
    int getNext(int n) {
        int total = 0;
        while (n > 0) {
            int d = n % 10;
            total += d * d;
            n /= 10;
        }
        return total;
    }
};