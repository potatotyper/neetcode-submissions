class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int start = 0;
        int maxsize = 0;
        set<char> charset;
        for (int end = 0; end < s.size(); end++) {
            while(charset.contains(s[end])) {
                charset.erase(s[start]);
                ++start;
            }
            charset.insert(s[end]);
            maxsize = max(maxsize, end-start+1);
        }
        return maxsize;
    }
};
