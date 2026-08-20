class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> ordered;
        for(auto &num: nums){
            ordered.insert(num);
        }
        int count = 1;
        int max = 0;
        for(auto it = ordered.begin(); it != ordered.end(); ++it){
            auto nextit = next(it);
            if(nextit == ordered.end()){
                if(max < count){
                    max = count;
                }
                break;
            }
            if(*nextit != *it + 1){
                if(max < count){
                    max = count;
                }
                count = 1;
                continue;
            }
            if(*nextit == *it + 1){
                count++;
            }
        }
        return max;
    }
};
