class Solution {
public:
    int maxArea(vector<int>& height) {
        int l = 0;
        int r = height.size() - 1;
        int maxArea = 0;

        while (l < r) {
            // Calculate the current area
            int currentArea = (r - l) * min(height[l], height[r]);
            
            // Update the maximum area found so far
            if (currentArea > maxArea) {
                maxArea = currentArea;
            }
            
            // Move the pointer of the shorter line
            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return maxArea;
    }
};