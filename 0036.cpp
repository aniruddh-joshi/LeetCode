class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> columns(9);
        vector<unordered_set<char>> boxes(9);

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];
                if (current == '.') {
                    continue;
                }

                // Check the current value in the row
                if (rows[i].count(current) > 0) {
                    return false;
                }
                rows[i].insert(current);

                // Check the current value in the column
                if (columns[j].count(current) > 0) {
                    return false;
                }
                columns[j].insert(current);

                // Check the current value in the 3x3 box
                int boxIndex = (i / 3) * 3 + j / 3;
                if (boxes[boxIndex].count(current) > 0) {
                    return false;
                }
                boxes[boxIndex].insert(current);
            }
        }
        return true;
    }
};
