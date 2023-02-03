class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
    vector<string> board(n, string(n, '.'));
    vector<int> cols;
    function<void(int)> dfs = [&](int row) {
        if (row == n) {
            res.push_back(board);
            return;
        }
        for (int col = 0; col < n; col++) {
            if (cols.empty() || std::find(cols.begin(), cols.end(), col) == cols.end()) {
                bool valid = true;
                for (int i = 0; i < cols.size(); i++) {
                    if (abs(cols[i] - col) == abs(i - row)) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    board[row][col] = 'Q';
                    cols.push_back(col);
                    dfs(row + 1);
                    board[row][col] = '.';
                    cols.pop_back();
                }
            }
        }
    };
    dfs(0);
    return res;
    }
};