class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> s_set;
        for(int i = 0; i < s.length(); i++){
            if(s_set.find(s[i]) == s_set.end()){
                s_set[s[i]] = 1;
            }
            else{
                s_set[s[i]]++;
            }
        }
        map<char, int> t_set;
        for(int i = 0; i < t.length(); i++){
            if(t_set.find(t[i]) == t_set.end()){
                t_set[t[i]] = 1;
            }
            else{
                t_set[t[i]]++;
            }
        }
        return t_set == s_set;
    }
};
