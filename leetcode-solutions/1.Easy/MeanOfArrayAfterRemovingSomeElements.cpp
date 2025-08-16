// Leetcode Q-1619:https://leetcode.com/problems/mean-of-array-after-removing-some-elements/
/*Approach:As first need to find the minimum and maximum element in the array.
So we should sort the array and then find 0.05*n elements from the start and end of the array.
Then we can calculate the mean of the remaining elements.
Time Complexity: O(nlogn) for sorting, O(n) for calculating mean.
Space Complexity: O(1) as we are not using any extra space except for input and output.
*/
class Solution
{
public:
    double trimMean(vector<int> &arr)
    {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int k = n * 0.05;
        int sum = 0;
        for (int i = k; i < (n - k); i++)
        {
            sum += arr[i];
        }
        int count = n - 2 * k;
        return (double)sum / count;
    }
};