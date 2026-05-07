class Solution {
public:
    bool isValid(string s) {
        vector<char> curopen;
        int cur = -1;
        for (char c : s) {
            if (cur == -1) {
                curopen.push_back(c);
                ++cur;
                continue;
            }
            switch(c) {
                case ']':
                    if (curopen[cur] != '[') return false;
                    curopen.pop_back();
                    --cur;
                break;
                case '}':
                    if (curopen[cur] != '{') return false;
                    curopen.pop_back();
                    --cur;
                break;
                case ')':
                    if (curopen[cur] != '(') return false;
                    curopen.pop_back();
                    --cur;
                break;
                default: 
                    curopen.push_back(c);
                    ++cur;
           }
        }
        if (curopen.empty()) return true;
        return false;
    }
};
