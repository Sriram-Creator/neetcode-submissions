class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<int>> boxes(9);
        vector<unordered_set<int>> rows(9);
        vector<unordered_set<int>> cols(9);
        for(int r = 0; r < board.size(); r++){
            for(int c = 0; c < board[0].size(); c++){
                int box_ind = r/3 * 3 + c/3;
                if(board[r][c] == '.'){
                    continue;
                }
                if(cols[c].count(board[r][c]) || 
                rows[r].count(board[r][c]) || boxes[box_ind].count(board[r][c])){
                    return false;
                }
                rows[r].insert(board[r][c]);
                cols[c].insert(board[r][c]);
                boxes[box_ind].insert(board[r][c]);
            }
        }
        return true;
    }
};
