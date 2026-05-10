class Solution {
public:
    vector<int> num;
    int targets;
    int search(vector<int>& nums, int target) {
        num = nums;
        targets = target;
        return bin(0, nums.size());    
    }

    int bin(int start, int end) {
            int middle = (start + end) / 2;
            if (num[middle] == targets) return middle;
            if (end - start == 1) return -1;
            if (num[middle] < targets) {
                return bin(middle, end);
            } else {
                return bin(start, middle);
            }
        }
};
