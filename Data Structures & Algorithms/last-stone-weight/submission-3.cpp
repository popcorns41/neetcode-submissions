class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(),stones.end());

        while (maxHeap.size() > 1) {
            int f = maxHeap.top();
            maxHeap.pop();
            int s = maxHeap.top();
            maxHeap.pop();
            if (s < f){
                maxHeap.push(f - s);
            }
        }

        maxHeap.push(0);
        return maxHeap.top();
    }
};
