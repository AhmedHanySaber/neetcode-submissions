class Solution {
    /**
     * @param {number[]} nums
     * @param {number} k
     * @return {number[]}
     */
    topKFrequent(nums, k) {
        let count = {};
        for (let n of nums) {
            count[n] = (count[n] || 0) + 1;
        }
        let sorted = Object.keys(count).sort((a, b) => count[b] - count[a]);
        return sorted.slice(0, k).map(Number);
    }
}
