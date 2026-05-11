class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int kth;
    KthLargest(int k, vector<int>& nums) {
        kth = k;
        for(int i : nums) {
            minHeap.push(i);
            if (minHeap.size() > kth) {
                minHeap.pop();
            }
        }
    }
    
    int add(int val) {
        minHeap.push(val);
        if (minHeap.size() > kth) {
            minHeap.pop();
        }
        return minHeap.top();
    }
};
