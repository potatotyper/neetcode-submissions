class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char, int> curmap;
        int start = 0;
        int maxlen = 0;
        for(int end = 0; end < s.size(); ++end) {
            int size = end - start + 1;
            if (curmap.contains(s[end])) {
                curmap.at(s[end]) += 1;
            } else {
                curmap.insert({s[end], 1});
            }
            int curmax = 0;
            for (auto it = curmap.begin(); it != curmap.end(); it++) {
                curmax = max(curmax, it->second);
            }
            while ((size - curmax) > k) {
                curmap.at(s[start]) -= 1;
                size--;
                start++;
                int curmax = 0;
                for (auto it = curmap.begin(); it != curmap.end(); it++) {
                    curmax = max(curmax, it->second);
                }
            }

            maxlen = max(size, maxlen);
        }
        return maxlen;
    }
};
