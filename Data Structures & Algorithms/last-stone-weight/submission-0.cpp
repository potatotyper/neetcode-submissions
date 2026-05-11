class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        for(int i : stones) {
            maxHeap.push(i);
        }
        while(maxHeap.size() > 1) {
            int s1;
            int s2;
            s1 = maxHeap.top();
            maxHeap.pop();
            s2 = maxHeap.top();
            maxHeap.pop();
            if (s1 == s2) {
                continue;
            } else if (s1 > s2) {
                int n = s1 - s2;
                maxHeap.push(n);
            } else {
                int n = s2 - s1;
                maxHeap.push(n);
            }
        }
        if (maxHeap.size() == 1) {
            return maxHeap.top();
        }
        return 0;
    }
};
