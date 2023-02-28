#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    void sortColors(vector<int> &v)
    {

        int ones = 0;
        int twos = 0;
        int zeros = 0;

        for (auto x : v)
        {
            if (x == 0)
                zeros += 1;
            if (x == 1)
                ones += 1;
            if (x == 2)
                twos += 1;
        }

        for (int i = 0; i < zeros; i++)
            v[i] = 0;
        for (int i = zeros; i < zeros + ones; i++)
            v[i] = 1;
        for (int i = zeros + ones; i < zeros + ones + twos; i++)
            v[i] = 2;
    }
};
int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    Solution s = Solution();
    s.sortColors(v);
    for (auto x : v)
        cout << x << " ";
        
}