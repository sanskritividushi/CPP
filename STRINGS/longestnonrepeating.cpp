//Longest Substring Without Repeating Characters
// Given a string s, find the longest substring without repeating characters.
#include <iostream>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    void printLongestSubstring(string s) {
        int n = s.length();
        int maxl = 0;
        int start = 0;
        int l = 0;
        unordered_set<char> chars;

        for (int r = 0; r < n; r++) {
            if (chars.count(s[r]) == 0) {
                chars.insert(s[r]);
                if (r - l + 1 > maxl) {
                    maxl = r - l + 1;
                    start = l;
                }
            } else {
                while (chars.count(s[r])) {
                    chars.erase(s[l]);
                    l++;
                }
                chars.insert(s[r]);
            }
        }

        cout << "Longest Substring: " << s.substr(start, maxl) << endl;
    }
};

int main() {
    Solution solution;
    string input = "abbcefff";
    solution.printLongestSubstring(input);

    return 0;
}
