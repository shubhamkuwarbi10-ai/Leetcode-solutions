# 4084. Last Visited Cell in a Directional Grid

### Difficulty: Medium

## Description
You are given an m x n matrix grid where each cell contains one of the following characters:


	'L': move one cell left.
	'R': move one cell right.
	'U': move one cell up.
	'D': move one cell down.


You start at cell (0, 0), which is considered visited. At each step, move to the cell indicated by the character in your current cell.

The process ends if the indicated move would either leave the grid or enter a cell that has already been visited. In either case, the move is not made.

Return an integer array [r, c] representing the row and column indices of the last visited cell. The indices are 0-based.

 
Example 1:


Input: grid = [["R","D"],["U","L"]]

Output: [1,0]

Explanation:


	Start at cell (0, 0), which contains 'R', so move right to (0, 1).
	At cell (0, 1), the character is 'D', so move down to (1, 1).
	At cell (1, 1), the character is 'L', so move left to (1, 0).
	At cell (1, 0), the character is 'U', which indicates moving to (0, 0). However, (0, 0) has already been visited, so this move is not made.
	Therefore, the process ends at the last visited cell (1, 0), so the answer is [1, 0].



Example 2:


Input: grid = [["R","R","R"]]

Output: [0,2]

Explanation:


	Start at cell (0, 0), which contains 'R', so move right to (0, 1).
	At cell (0, 1), the character is 'R', so move right to (0, 2).
	At cell (0, 2), the character is 'R', which indicates moving to (0, 3). However, (0, 3) is outside the grid, so this move is not made.
	Therefore, the process ends at the last visited cell (0, 2), so the answer is [0, 2].



 
Constraints:


	1 <= m == grid.length <= 105
	1 <= n == grid[i].length <= 105
	m * n <= 105
	grid[i][j] is one of 'L', 'R', 'U', or 'D'.

## Submission Details
- **Status**: Accepted
- **Runtime**: 55
- **Memory**: 144180000
- **Language**: cpp

## Code
```cpp
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
```
