#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    //Problem: Given two strings s and t, return true if t is an anagram of s, and false otherwise.
    //URL: https://leetcode.com/problems/valid-anagram/
    //Solution: https://leetcode.com/problems/valid-anagram/solutions/5803102/my-solution/
    //Complexity: O(n log n)

    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        vector<char> first_string(s.begin(), s.end());
        vector<char> second_string(t.begin(), t.end());

        sort(first_string.begin(), first_string.end());
        sort(second_string.begin(), second_string.end());

        return first_string == second_string;
    }
};