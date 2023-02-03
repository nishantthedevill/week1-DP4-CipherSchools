class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        int m = grid.size();
    int n = grid[0].size();
    int start_x, start_y, end_x, end_y, empty = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                start_x = i;
                start_y = j;
            } else if (grid[i][j] == 2) {
                end_x = i;
                end_y = j;
            } else if (grid[i][j] == 0) {
                empty++;
            }
        }
    }
    int res = 0;
    vector<vector<int>> dirs{{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    function<void(int, int, int)> dfs = [&](int x, int y, int visited) {
        if (x == end_x && y == end_y && visited == (1 << empty) - 1) {
            res++;
            return;
        }
        for (auto dir : dirs) {
            int a = x + dir[0];
            int b = y + dir[1];
            if (a >= 0 && a < m && b >= 0 && b < n && grid[a][b] != -1) {
                int idx = a * n + b;
                if ((visited >> idx) & 1) continue;
                dfs(a, b, visited | (1 << idx));
            }
        }
    };
    dfs(start_x, start_y, 1 << (start_x * n + start_y));
    return res;
    }
};