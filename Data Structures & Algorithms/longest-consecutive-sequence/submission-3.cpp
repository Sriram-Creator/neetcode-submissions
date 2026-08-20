class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numbers;
        int max = 0;
        for(auto &num: nums){
            numbers.insert(num);
        }
        for(int i = 0; i < nums.size(); i++){
            int count = 0;
            int num = nums[i];
            if(numbers.find(num - 1) != numbers.end()){
                continue;
            }
            if(numbers.find(num-1) == numbers.end()){
                count = 1;
                while(numbers.find(num+1) != numbers.end()){
                    count++;
                    num++;
                }
                if(max < count){
                    max = count;
                }
            }
        }
        return max;
    }
};
