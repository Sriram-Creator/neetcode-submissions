class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        unordered_map<int,int> complements;
        for(int i = 0; i < nums.size(); i++){
            complements.insert({nums[i], i});
        }
        for(int i = 0; i < nums.size(); i++){
            auto it = complements.find(target - nums[i]);
            if(it != complements.end() && (it->second != i)){
                if(i < it->second){
                    result.push_back(i);
                    result.push_back(it->second);
                }
                else{
                    result.push_back(it->second);
                    result.push_back(i);
                }
                break;
            }
        }
        return result;
    }
};
