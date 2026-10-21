class Solution {
public:
    vector<int> check(vector<vector<bool>>& visited ,vector<vector<char>>& grid ,int i , int j){
        int row = grid.size();
        int col = grid[0].size();

        visited[i][j] = true;
        int x = i , y = j;

        if (grid[i][j] == 'L') y--;
        else if (grid[i][j] == 'R') y++;
        else if (grid[i][j] == 'U') x--;
        else if (grid[i][j] == 'D') x++;

        if (x < 0 || x >= row || y < 0 || y >= col || visited[x][y]) return {i ,j} ;

        return check(visited ,grid ,x ,y);

    }
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();

        vector<vector<bool>> visited(row ,vector<bool> (col, false));
        return check(visited ,grid ,0 ,0);
    }
};