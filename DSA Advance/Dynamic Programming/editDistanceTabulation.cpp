#include <bits/stdc++.h>
using namespace std;


int editDistancetaulation(string s1, string s2, int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    //base cases
    for (int i = 0; i < n + 1; i++)
    {

        dp[0][i] = i ;
    }
    for (int j = 0; j < m + 1; j++)
    {
        dp[j][0] = j ;
    }
    for(int i=1;i<m+1;i++){
        for(int j=1;j<n+1;j++){
            if(s1[i-1]==s2[j-1]){
                dp[i][j]=dp[i-1][j-1];
            }
            else{
                int insert=dp[i][j-1];
                int del=dp[i-1][j];
                int replace=dp[i-1][j-1];
                dp[i][j]=1+min(insert, min(del, replace));
                
            }
        }

    }
    return dp[m][n];

}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        int m = s1.length();
        int n = s2.length();
        cout << editDistancetaulation(s1, s2, m, n);
    }
}