// question link: https://leetcode.com/problems/design-task-manager
class TaskManager
{
private:
    // taskId -> {userId, priority}
    unordered_map<int, pair<int, int>> taskMap;

    // Max heap: (priority, taskId, userId)
    priority_queue<tuple<int, int, int>> maxHeap;

public:
    // Constructor
    TaskManager(vector<vector<int>> &tasks)
    {
        for (auto &t : tasks)
        {
            int userId = t[0], taskId = t[1], priority = t[2];
            taskMap[taskId] = {userId, priority};
            maxHeap.emplace(priority, taskId, userId);
        }
    }

    // Add a new task
    void add(int userId, int taskId, int priority)
    {
        taskMap[taskId] = {userId, priority};
        maxHeap.emplace(priority, taskId, userId);
    }

    // Edit existing task's priority
    void edit(int taskId, int newPriority)
    {
        auto &entry = taskMap[taskId];
        entry.second = newPriority;
        maxHeap.emplace(newPriority, taskId, entry.first);
    }

    // Remove task
    void rmv(int taskId)
    {
        taskMap.erase(taskId);
    }

    // Execute top task
    int execTop()
    {
        while (!maxHeap.empty())
        {
            auto [priority, taskId, userId] = maxHeap.top();
            maxHeap.pop();

            if (taskMap.count(taskId) && taskMap[taskId].second == priority)
            {
                taskMap.erase(taskId);
                return userId;
            }
        }
        return -1; // no tasks left
    }
};