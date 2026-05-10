class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vector<int> ends;
        int found = 0;
        for(vector<int> vi : matrix) {
            ends.push_back(vi[vi.size() - 1]);
        }
        for(int i = 0; i < ends.size() - 1; ++i) {
            if (target > ends[i] && target <= ends[i+1]) {
                found = i+1;
                break;
            }
        }
        for(int i : matrix[found]) {
            if (i == target) return true;
        }
        return false;
    }
};
