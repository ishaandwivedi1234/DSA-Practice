#include <bits/stdc++.h>

using namespace std;
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {

        vector<pair<int, int>> vp;

        for (int i = 0; i < matrix.size(); i++)
        {
            for (int j = 0; j < matrix[0].size(); j++)
            {
                if (matrix[i][j] == 0)
                {
                    vp.push_back(make_pair(i, j));
                }
            }
        }

        for (auto p : vp)
        {
            int i = p.first;
            int j = p.second;

            for (int col = 0; col < matrix[0].size(); col++)
            {
                matrix[i][col] = 0;
            }

            for (int col = 0; col < matrix.size(); col++)
            {
                matrix[col][j] = 0;
            }
        }
    }
};

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> matrix;
        for (int i = 0; i < n; i++)
        {
            vector<int> v;
            for (int j = 0; j < m; j++)
            {
                int val;
                cin >> val;
                v.push_back(val);
            }
            matrix.push_back(v);
        }

        Solution s = Solution();
        s.setZeroes(matrix);

        for (int i = 0; i < matrix.size(); i++)
            for (int j = 0; j < matrix[0].size(); j++)
                cout << matrix[i][j] << " ";
    }
}