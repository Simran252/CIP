#include <bits/stdc++.h>
using namespace std;
int countCoinsHelper(int *arr, int n, int sum, vector<vector<int>> &memo)
{
    //base casae
    if (n == 0 || sum < 0)
    {
        return 0;
    }
    if (memo[n][sum] == INT_MIN)
    {

        if (sum == 0)
        {
            // return 1;
            memo[n][sum] = 1;
        }
        else
        {

            //include
            int a = countCoinsHelper(arr, n, sum - arr[n - 1], memo);

            //not include
            int b = countCoinsHelper(arr, n - 1, sum, memo);
            memo[n][sum] = a + b;
        }
    }
    return memo[n][sum];
}
int helper(int *arr, int index, int sum, int n, vector<vector<int>> &memo)
{
    if (index == n || sum < 0)
    {
        return -1;
    }
    if (memo[index][sum] == INT_MIN)
    {

        if (sum == 0)
        {
            // return 1;
            memo[index][sum] = 1;
        }
        else
        {
            //include
            int a = helper(arr, index, sum - arr[index], n, memo);

            //not include
            int b = helper(arr, index + 1, sum, n, memo);
            if (a < 0 && b < 0)
            {
                memo[index][sum] = -1;
            }
            else if (a > 0 && b > 0)
            {
                memo[index][sum] = a + b;
            }

            else
            {
                memo[index][sum] = max(a, b);
            }
        }
    }
    return memo[index][sum];
}
int countCoins(int *arr, int n, int sum, vector<vector<int>> &memo)
{
    int index = 0;
    return helper(arr, index, sum, n, memo);
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum;
    cin >> sum;
    vector<vector<int>> memo(n + 1, vector<int>(sum + 1, INT_MIN));
    // cout << countCoins(arr, n, sum, memo);

    //from last
    cout << countCoinsHelper(arr, n, sum, memo);
}
