class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numset(nums.begin(), nums.end());
        int maxlen = 0;
        for(int n : nums) {
            if (!numset.contains(n-1)) {
                int len = 0;
                while(numset.contains(n + len)) {
                    len++;
                }
                maxlen = max(maxlen, len);
            }
        }
        return maxlen;
    }
};
