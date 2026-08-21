class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> results;
        unordered_map<int,int> nums;
        for(int i = 0; i < numbers.size(); i++){
            int diff = target - numbers[i];
            if(nums.find(diff) != nums.end()){
                if(i < nums[diff]){
                    return {i+1,nums[diff]+1};
                }
                else{
                    return {nums[diff]+1, i+1};
                }
            }
            nums.insert({numbers[i],i});
        }
        return {};
    }
};
