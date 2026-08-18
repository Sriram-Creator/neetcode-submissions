class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(auto &str : strs){
            int count = str.length();
            string cnt = to_string(count);
            encoded += cnt;
            encoded += ".";
            encoded += str;;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string> result;
        string word;
        for(int i = 0; i < s.length(); i++){
            string cnt;
            while(s[i] != '.'){
                cnt += s[i];
                i++;
            }
            int count = stoi(cnt);
            word = s.substr(i+1,count);
            result.push_back(word);
            i += count;
        }
        return result;
    }
};
