class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for( auto num: nums){
            freq[num]++;
        }
        vector<int> result;
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> max_heap;
        for(auto pair : freq){
            max_heap.push({pair.second,pair.first});
            if(max_heap.size() > k){
                max_heap.pop();
            }
        }
        while(k > 0){
            auto p = max_heap.top();
            max_heap.pop();
            result.push_back(p.second);
            k--;
        }
        return result;
    }
};
