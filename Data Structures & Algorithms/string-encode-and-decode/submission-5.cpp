class Solution {
public:

    string encode(vector<string>& strs) {
        string n;
        for(int i = 0; i < strs.size(); i++) {
            string s = strs[i];
            for(int x = 0; x < s.size(); x++) {
                char c = s[x];
                c += 10;
                n = n + c;
            }
            n = n + '\x01';
        }
        return n;
    }

    vector<string> decode(string s) {
        vector<string> vec;
        string cur = "";
        for(char c : s) {
            if (c != '\x01') {
                c -= 10;
                cur += c;
            } else {    
                vec.push_back(cur);
                cur = "";
            }
        }
        return vec;
    }   
};
