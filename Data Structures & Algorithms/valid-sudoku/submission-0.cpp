class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    
    unordered_set<int> rows[9];
    unordered_set<int> cols[9];
    unordered_set<int> sqrs[9];

    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {

            char d = board[i][j];
            if (d == '.') continue;

            int s = (i / 3) * 3 + (j / 3);

            if (rows[i].count(d) || cols[j].count(d) || sqrs[s].count(d))
                return false;

            rows[i].insert(d);
            cols[j].insert(d);
            sqrs[s].insert(d);
        }
    }
    return true;
}
        

    
};
