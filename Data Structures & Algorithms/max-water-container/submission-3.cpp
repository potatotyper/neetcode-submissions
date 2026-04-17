class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxv = 0;
        int l = 0;
        int r = heights.size() -1;
        while (l < r) {
            int vol = (min(heights[l], heights[r]) * (r-l));
            maxv = max(maxv, vol);
            if (heights[l] > heights[r]) {
                --r;
            } else if (heights[l] < heights[r]) {
                ++l;
            } else {
                --r;
            }
        }
        return maxv;
    }
};
