// Problem: Way Too Long Words
// Link: https://codeforces.com/problemset/problem/71/A
// Approach: Words with length > 10 using the format: first_letter + (length - 2) + last_letter
// If the length < 10 then print the word as it is
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
int main() {
    int n; 
    cin >> n;
    string word;
    while (n--) {
        cin >> word;
        int len = word.length();
        if (len > 10) {
            cout << word[0] << len - 2 << word[len - 1] << endl;
        } else {
            cout << word << endl;
        }
    }
    return 0;
}
