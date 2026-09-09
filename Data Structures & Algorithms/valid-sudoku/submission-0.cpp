class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row_test[82] = {0};
        int column_test[82] = {0};
        int segment_test[82] = {0};
        char digit;
        int size = board.size();
        int extra = 0;
        for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                        if(isdigit(board[i][j])) {
                                digit = board[i][j] - '0';
                                row_test[digit + extra]++;
                        }
                }
                extra += 9;
        }
        extra = 0;
        for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                        if(isdigit(board[j][i])) {
                                digit = board[j][i] - '0';
                                column_test[digit + extra]++;
                        }
                }
                extra += 9;
        }
        extra = 0;
        int condition = 2;
        int i = 0, j = 0;
        for(i = 0; i < size; i++) {
                for(; j <= condition; j++) {
                        if(isdigit(board[i][j])) {
                                digit = board[i][j] - '0';
                                segment_test[digit + extra]++;
                        }
                }
                if ((i == 2) || (i == 5)) {
                        extra += 9;
                }
                if (i == 8 && condition == 8) {
                        break;
                } else if (i == 8 && condition < 8) {
                        i = -1;
                        extra += 9;
                        condition += 3;
                }
                if (condition == 2) {
                        j = 0;
                } else {
                        j = condition - 2;
                }
        }
        for (int element : row_test) {
                if (element > 1) return false;
        }
        for (int element : column_test) {
                if (element > 1) return false;
        }
        for (int element : segment_test) {
                if (element > 1) return false;
        }
        return true;
    }
};
