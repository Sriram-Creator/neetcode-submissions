class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> result;
        for(auto num:nums){
            if(result.count(num)==1){
                return true;
            }
            result.insert(num);
        }
        return false;
    }
};