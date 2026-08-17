class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> counts;
        vector<int> result;
        for(auto& num: nums){
            counts[num]++;
        }
        
        priority_queue<pair<int,int>> min_pq;

        for(auto& count_pair: counts){
            min_pq.push({count_pair.second, count_pair.first});
        }

        for(int i = 0; i < k; i++){
            pair x = min_pq.top();
            result.push_back(x.second);
            min_pq.pop();
        }
        return result;
    }
};
