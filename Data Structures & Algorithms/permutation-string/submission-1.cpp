class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char,int> letters;
        for(auto &c : s1){
            letters[c]++;
        }
        int left = 0;
        int right = s1.size();
        while(right < s2.size()+1){
            unordered_map<char, int> counts;
            for(int i = left; i < right; i++){
                counts[s2[i]]++;
            }
            if(counts == letters){
                return true;
            }
            right++;
            left++;
        }
        return false;
    }
};
