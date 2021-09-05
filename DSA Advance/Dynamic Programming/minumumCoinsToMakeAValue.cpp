#include <bits/stdc++.h>
using namespace std;
int tabulation(int *arr, int sum, int n)
{
    //index sum
    vector<vector<int>> dp(sum + 1, vector<int>(n + 1, INT_MAX));

    for (int i = 0; i < n + 1; i++)
    {
        //col
        dp[0][i] = 0;
    }

    for (int i = 1; i < sum + 1; i++)
    {
        for (int j = 1; j < n + 1; j++)
        {
            for (int k = j; k >= 0; k--)
            {
                if ((i - arr[k]) >= 0)
                {

                    int curr = dp[(i - arr[k])][k];
                    if (curr != INT_MAX)
                    {
                        dp[i][j] = min(dp[i][j], curr + 1);
                    }
                }
            }
        }
    }
    return dp[sum][n];
}
int minimumCoinsNeeded(int *arr, int n, int sum)
{
    if (sum < 0)
    {
        return INT_MAX;
    }
    if (sum == 0)
    {
        return 0;
    }
    int minCoins = INT_MAX;
    for (int i = n; i >= 0; i--)
    {
        int curr = minimumCoinsNeeded(arr, i, sum - arr[i]);

        if (curr != INT_MAX)
        {
            minCoins = min(minCoins, curr + 1);
        }
    }
    return minCoins;
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
    cout << minimumCoinsNeeded(arr, n - 1, sum);
    cout << "using tabultaion"
         << "\n";
    cout << tabulation(arr, sum, n-1);
}