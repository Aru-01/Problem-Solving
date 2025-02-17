// problem: https://leetcode.com/problems/n-queens/
class Solution
{
public:
    bool is_valid(int col, int row, int n, vector<string> &board)
    {
        for (int i = 0; i < row; i++)
        {
            if (board[i][col] == 'Q')
                return false;
        }

        int i = row - 1, j = col - 1;

        while (i >= 0 && j >= 0)
        {
            if (board[i][j] == 'Q')
                return false;
            i--;
            j--;
        }

        i = row - 1, j = col + 1;
        while (i >= 0 && j < n)
        {
            if (board[i][j] == 'Q')
                return false;
            i--;
            j++;
        }

        return true;
    }

    void f(int n, int j, vector<vector<string>> &ans, vector<string> &board)
    {
        if (j == n)
        {
            ans.push_back(board);
            return;
        }

        for (int i = 0; i < n; i++)
        {
            if (is_valid(i, j, n, board))
            {
                board[j][i] = 'Q';
                f(n, j + 1, ans, board);
                board[j][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n)
    {
        vector<vector<string>> ans;
        vector<string> board(n, string(n, '.'));

        f(n, 0, ans, board);
        return ans;
    }
};

