
class MinStack {
public:
    vector<int> arr;
    map<int, int> count;
    int stacktop;
    int min1;
    int min2;
    MinStack() {
        stacktop = 0;
        min1 = INT_MAX;
        min2 = INT_MAX;
    }
    
    void push(int val) {
        arr.push_back(val);
        ++count[val];
        ++stacktop;
    }
    
    void pop() {
        int pval = arr[stacktop-1];
        arr.pop_back();
        --count[pval];
        if (count[pval] == 0) {
            count.erase(pval);
        }
        --stacktop;
    }
    
    int top() {
        return arr[stacktop-1];
    }
    
    int getMin() {
        return count.begin()->first;
    }
};
