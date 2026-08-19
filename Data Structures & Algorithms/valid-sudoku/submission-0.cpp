class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int r = 0; r < board.size(); r++){
            unordered_set<int> nums;
            for(int c = 0; c < board[0].size(); c++){
                if(board[r][c] == '.'){
                    continue;
                }
                if(nums.count(board[r][c])){
                    return false;
                }
                nums.insert(board[r][c]);
            }
        }
        for(int c = 0; c < board[0].size(); c++){
            unordered_set<int> nums;
            for(int r = 0; r < board.size(); r++){
                if(board[r][c] == '.'){
                    continue;
                }
                if(nums.count(board[r][c])){
                    return false;
                }
                nums.insert(board[r][c]);
            }
        }
        vector<unordered_set<int>> boxes(9);
        for(int r = 0; r < board.size(); r++){
            for(int c = 0; c < board[0].size(); c++){
                int box_ind = r/3 * 3 + c/3;
                if(board[r][c] == '.'){
                    continue;
                }
                if(boxes[box_ind].count(board[r][c])){
                    return false;
                }
                boxes[box_ind].insert(board[r][c]);
            }
        }
        return true;
    }
};
