class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0;
        int right = 0;
        unordered_map<char, int> counts;
        int maximum = 0;
        while(right < s.length()){
            if(counts.find(s[right]) != counts.end() && counts[s[right]] >= left){
                left = counts[s[right]] + 1;
            }
            counts[s[right]] = right;
            right++;
            maximum = max(maximum, right - left);
        }
        return maximum;
    }
};
