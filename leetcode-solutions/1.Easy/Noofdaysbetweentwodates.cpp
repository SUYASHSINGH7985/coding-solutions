/*
LeetCode Problem: Number of Days Between Two Dates
Link: https://leetcode.com/problems/number-of-days-between-two-dates/

Time Complexity: O(1)
- Parsing and conversion of dates and computing difference are done in constant time.

Space Complexity: O(1)
- Only a fixed amount of extra space is used (tm structs and a few variables).
*/

class Solution {
public:
    // Helper function to parse date string into tm struct
    tm parseDate(const string& date) {
        tm timeStruct = {};
        sscanf(date.c_str(), "%d-%d-%d", &timeStruct.tm_year, &timeStruct.tm_mon, &timeStruct.tm_mday);
        timeStruct.tm_year -= 1900;  // tm_year counts from 1900
        timeStruct.tm_mon -= 1;      // tm_mon is zero-based
        timeStruct.tm_hour = 0;
        timeStruct.tm_min = 0;
        timeStruct.tm_sec = 0;
        timeStruct.tm_isdst = -1;    // Not considering daylight saving time
        return timeStruct;
    }

    int daysBetweenDates(string date1, string date2) {
        tm tm1 = parseDate(date1);
        tm tm2 = parseDate(date2);

        time_t time1 = mktime(&tm1);
        time_t time2 = mktime(&tm2);

        double diffSeconds = difftime(time2, time1);
        int diffDays = static_cast<int>(abs(diffSeconds) / (60 * 60 * 24));

        return diffDays;
    }
};
