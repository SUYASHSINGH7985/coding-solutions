// question Link: https://leetcode.com/problems/water-bottles/
class Solution
{
public:
    int numWaterBottles(int numBottles, int numExchange)
    {
        int total = numBottles; // total bottles drunk
        int empty = numBottles; // empty bottles left after drinking

        while (empty >= numExchange)
        {
            int newBottles = empty / numExchange;     // exchangeable full bottles
            total += newBottles;                      // drink them
            empty = empty % numExchange + newBottles; // update empty bottles
        }
        return total;
    }
};
