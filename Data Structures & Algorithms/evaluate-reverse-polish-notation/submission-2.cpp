class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> num;
        for (int i = 0; i < tokens.size(); ++i) {
                if (tokens[i] == "+") {
                    int first = num.top();
                    num.pop();
                    int second = num.top();
                    num.pop();
                    num.push(second + first);
                } else if (tokens[i] == "-") {
                    int first = num.top();
                    num.pop();
                    int second = num.top();
                    num.pop();
                    num.push(second - first);
                } else if (tokens[i] == "*") {
                    int first = num.top();
                    num.pop();
                    int second = num.top();
                    num.pop();
                    num.push(second * first);
                } else if (tokens[i] == "/") {
                    int first = num.top();
                    num.pop();
                    int second = num.top();
                    num.pop();
                    num.push(second / first);
                } else {
                    num.push(stoi(tokens[i]));
                }
        }
        return num.top();
    }
};
