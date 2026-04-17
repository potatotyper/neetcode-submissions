class Solution {
public:
    int maxArea(vector<int>& heights) {
        int maxv = 0;
        for(int l = 0; l < heights.size(); ++l) {
            int r = heights.size() -1;
            while (l < r) {
                maxv = max(maxv, (min(heights[l], heights[r]) * (r-l)));
                --r;
            }
        }
        return maxv;
    }
};
