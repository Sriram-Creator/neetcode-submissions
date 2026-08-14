class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> groups;
        vector<vector<string>> result;
        for(int i = 0; i < strs.size(); i++){
            string str1 = strs[i];
            sort(str1.begin(), str1.end());
            groups[str1].push_back(strs[i]);
        }
        for(auto&pair : groups){
            result.push_back(pair.second);
        }
        return result; 
    }
};
