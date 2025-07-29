// Problem: Watermelon
// Link: https://codeforces.com/problemset/problem/4/A
// Approach: Check if the given weight is even and greater than 2
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
int main() {
    int w;
    cin >> w;
    if (w % 2 == 0 && w > 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
