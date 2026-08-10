class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> num_set;
        for(auto num : nums){
            if(num_set.count(num) == 1){
                return true;
            }
            else{
                num_set.insert(num);
            }
        }
        return false;
    }
};