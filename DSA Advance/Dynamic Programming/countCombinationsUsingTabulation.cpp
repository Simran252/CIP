#include <bits/stdc++.h>
using namespace std;

int countCoinsHelper(int *arr, int n, int sum){
    vector<vector<int>> dp(n+1, vector<int> (sum+1, 0));
    for(int i=0;i<sum+1;i++){
        dp[0][i]=0;
    }
    for(int j=0;j<n+1;j++){
        dp[j][0]=1;

    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            
                dp[i][j]=((j-arr[i-1]<0)?0:dp[i][j-arr[i-1]]) + dp[i-1][j];

        }

    }
    return dp[n][sum];
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
    //from last
    
    cout << countCoinsHelper(arr, n, sum);
}