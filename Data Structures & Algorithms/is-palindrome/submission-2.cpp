class Solution {
public:
    bool isPalindrome(string s) {
        string n;
        for (char c : s) {
            if (isalnum(c)) {
                n += tolower(c);
            }
        }
        int l = 0;
        int r = n.size() - 1;
        int midsize = n.size()/2;
        while(l < midsize) {
            if(n[l] != n[r]) {
                return false;
            }
            ++l;--r;
        }
        return true;
    }
};
