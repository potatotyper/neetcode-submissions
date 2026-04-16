class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //board[row][column]
        for (int r = 0; r < 9; ++r) {
            for (int c = 0; c < 9; ++c) {
                if(board[r][c] != '.') {
                    if (checkHor(r, board) == false) return false;
                    if (checkVer(c, board) == false) return false;
                    if (checkBox(r, c, board) == false) return false;
                }
            }
        }
        return true;
    }

    bool checkHor(int row, vector<vector<char>>& board) {
        set<int> cur;
        for(int i = 0; i < 9; ++i) {
            if (board[row][i] == '.') continue;
            if(cur.contains(board[row][i])) {
                return false;
            }
            cur.insert(board[row][i]);
        }
        return true;
    }

    bool checkVer(int col, vector<vector<char>>& board) {
        set<int> cur;
        for(int i = 0; i < 9; ++i) {
            if (board[i][col] == '.') continue;
            if(cur.contains(board[i][col])) {
                return false;
            }
            cur.insert(board[i][col]);
        }
        return true;
    }

    //div 3 to find box
    bool checkBox(int row, int col, vector<vector<char>>& board) {
        set<int> cur;
        int boxrow = row/3 * 3; //if 0, box = 0, if 1, box = 3 
        int boxcol = col/3 * 3; 
        for (int r = 0; r < 3; ++r) {
            for (int c = 0; c < 3; ++c) {
                if (board[r + boxrow][c + boxcol] == '.') continue;
                if(cur.contains(board[r + boxrow][c + boxcol])) {
                    return false;
                }
                cur.insert(board[r + boxrow][c + boxcol]);
            }
        }
        return true;
    }
};
