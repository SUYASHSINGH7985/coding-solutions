// Question Link: https://leetcode.com/problems/combination-sum/
// Approach: Backtracking
class Solution
{
public:
    vector<vector<int>> result; // to store all combinations
    vector<int> current;        // current combination

    void backtrack(vector<int> &candidates, int target, int index)
    {
        if (target == 0)
        { // valid combination found
            result.push_back(current);
            return;
        }
        if (target < 0)
            return; // invalid so stop recursion

        for (int i = index; i < candidates.size(); i++)
        {
            current.push_back(candidates[i]);                 // choose
            backtrack(candidates, target - candidates[i], i); // not i+1 because we can reuse
            current.pop_back();                               // undo (backtrack)
        }
    }

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        backtrack(candidates, target, 0);
        return result;
    }
};
