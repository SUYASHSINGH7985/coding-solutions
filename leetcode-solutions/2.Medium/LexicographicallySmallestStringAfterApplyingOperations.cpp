// LeetCode Problem 1625: Lexicographically Smallest String After Applying Operations
class Solution
{
public:
    string findLexSmallestString(string s, int a, int b)
    {
        queue<string> q;
        unordered_set<string> visited;
        string smallest = s;

        q.push(s);
        visited.insert(s);

        while (!q.empty())
        {
            string cur = q.front();
            q.pop();

            // Update lexicographically smallest
            if (cur < smallest)
            {
                smallest = cur;
            }

            // Operation 1: Add 'a' to all odd indices
            string added = cur;
            for (int i = 1; i < added.size(); i += 2)
            {
                added[i] = (added[i] - '0' + a) % 10 + '0';
            }
            if (!visited.count(added))
            {
                visited.insert(added);
                q.push(added);
            }

            // Operation 2: Rotate right by 'b'
            string rotated = cur.substr(cur.size() - b) + cur.substr(0, cur.size() - b);
            if (!visited.count(rotated))
            {
                visited.insert(rotated);
                q.push(rotated);
            }
        }

        return smallest;
    }
};
