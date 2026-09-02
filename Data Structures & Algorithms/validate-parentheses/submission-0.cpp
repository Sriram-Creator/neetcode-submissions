class Solution {
public:
    bool isValid(string s) {
        unordered_map<char, char> pairs;
        pairs[')'] = '(';
        pairs['}'] = '{';
        pairs[']'] = '[';
        stack<char> sequence;
        for( auto& c: s){
            if(pairs.count(c)){
            if(!sequence.empty() && sequence.top() == pairs[c]){
                sequence.pop();
            }
            else{
                return false;
            }
            }
            else{
                sequence.push(c);
            }
        }
        return sequence.empty();
    }
};
