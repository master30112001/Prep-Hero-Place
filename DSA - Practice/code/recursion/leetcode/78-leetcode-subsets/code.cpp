#include <bits/stdc++.h>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{

    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude the number
    solve(nums, output, index + 1, ans);

    // include the number
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subsets(vector<int> &nums)
{

    vector<vector<int>> ans;
    int index = 0;
    vector<int> output;

    solve(nums, output, index, ans);

    return ans;
}

int main()
{

    return 0;
}