class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        for(int l = 0; l<numbers.size(); ++l) {
            for (int r = l+1; r < numbers.size(); ++r) {
                if (numbers[l] + numbers[r] == target) {
                    vector<int> arr(2);
                    arr[0] = l+1;
                    arr[1] = r+1;
                    return arr;
                }
            }
        }
    }
};
