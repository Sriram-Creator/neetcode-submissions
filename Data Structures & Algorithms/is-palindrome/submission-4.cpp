class Solution {
public:
    bool isPalindrome(string s) {
        auto start = s.begin();
        auto last = s.end()-1;
        while(start < last){
            while(last > start && !isalnum(*last)){
                last--;
            }
            while(start < last && !isalnum(*start)){
                start++;
            }
            if(tolower(*start) != tolower(*last)){
                return false;
            }
            start++;
            last--;
        }
        return true;
    }
};
