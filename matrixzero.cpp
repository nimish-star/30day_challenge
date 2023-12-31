class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int r = matrix.size();
        int c = matrix[0].size();
        int i, j;
        vector<int> ans, res;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (matrix[i][j] == 0)
                {
                    ans.push_back(i); // row
                    res.push_back(j); // column
                }
            }
        }
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < c; j++)
                matrix[ans[i]][j] = 0;
        }
        for (int i = 0; i < res.size(); i++)
            for (int j = 0; j < r; j++)
                matrix[j][res[i]] = 0;
    }
};