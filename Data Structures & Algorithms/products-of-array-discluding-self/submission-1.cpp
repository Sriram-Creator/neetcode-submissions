class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        for(auto &num : nums){
            product *= num;
        }
        vector<int> output(nums.size(), 0);
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == 0){
                int product1 = 1;
                int product2 = 1;
                for(int j = 0; j < i; j++){
                    product1 *= nums[j];
                }
                for(int k = i+1; k < nums.size(); k++){
                    product2 *= nums[k];
                }
                output[i] = product1 * product2;
            }
            else{
                output[i] = product/nums[i];
            }
        }
        return output;
    }
};
