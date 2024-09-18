#include <vector>

class Solution {
public:
    //Problem: Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
    //URL: https://leetcode.com/problems/contains-duplicate/
    //Solution: https://leetcode.com/problems/contains-duplicate/solutions/5803025/my-solution/
    //Complexity: O(n)

    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};