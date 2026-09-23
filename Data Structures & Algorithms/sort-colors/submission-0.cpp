class Solution {
public:
    void sortColors(vector<int>& nums) {
        // Fixed the initialization syntax to use {key, value}
        map<int, int> ans = {
            {0, 0},
            {1, 0},
            {2, 0}
        };

        // Your counting loop
        for(int i = 0; i < nums.size(); i++) {
            ans[nums[i]] += 1;
        }

        int r = ans[0];
        int w = ans[1];
        int b = ans[2];
        int i = 0;

        // Your logic loop
        while(r || w || b) {
            if(r) {
                nums[i] = 0;
                r--;
            }
            else if(w) { // Simplified with else if
                nums[i] = 1;
                w--;
            }
            else if(b) {
                nums[i] = 2;
                b--;
            }
            i++;
        }
    }
};