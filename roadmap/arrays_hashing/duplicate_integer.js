class Solution {
    /**
     * @param {number[]} nums
     * @return {boolean}
     */
    hasDuplicate(nums) {
        let found = false;
        let i = 0;
        let j = 0;

        while (!found && i < nums.length) {
            j = 0;
            while (!found && j < nums.length) {
                if (i != j && nums[i] == nums[j]) {
                    found = true;
                }
                j++;
            }
            i++;
        }

        return found;
    }
}
