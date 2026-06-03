class Solution {
public:

    bool isSolve(int row, int col, vector<vector<char>>& board, char val){
        for(int i = 0; i < 9; i++ ){
            // check row
            if(board[row][i] == val) return false;

            // check col
            if(board[i][col] == val) return false;

            // check 3*3 matrix
            if(board[ 3 * ( row/3 ) + i/3 ][ 3 * ( col/3 ) + i % 3 ]  == val) return false;     // formula

        }
        return true;
    }

    bool solve(vector<vector<char>>& board){
        for(int row = 0; row<board.size(); row++){
            for(int col = 0; col<board[0].size(); col++){
                // check empty 
                if(board[row][col] == '.'){
                    for(char val = '1'; val<='9'; val++){
                        // check posible or not
                        if(isSolve(row, col, board, val)){
                            board[row][col] = val;

                            if(solve(board) == true) return true;
                            else board[row][col] = '.';

                        }
                    }
                    return false;
                }
            }
        }
        // base case (if nothing fail)
        return true;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board);
    }
};