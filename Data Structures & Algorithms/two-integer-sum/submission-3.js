class Solution {
    /**
     * @param {number[]} nums
     * @param {number} target
     * @return {number[]}
     */
    twoSum(nums, target) {
        let m = new Map();
        for (let i = 0; i < nums.length; i++) {
            let c = target - nums[i];
            if (m.has(c)) {
                return [m.get(c), i];
            }
            m.set(nums[i], i);
        }
    }
}
