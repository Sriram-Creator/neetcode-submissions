class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> counts;
        int result = 0;

        int left = 0;
        int maxFreq = 0;
        for(int right = 0; right < s.size(); right++){
            counts[s[right]]++;
            maxFreq = max(maxFreq, counts[s[right]]);
            while (right - left + 1 - maxFreq > k){
                counts[s[left]]--;
                left++;
            }
            result = max(result, right - left + 1);
        }
        return result;
    }
};
