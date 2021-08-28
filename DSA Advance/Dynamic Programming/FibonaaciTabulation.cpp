#include <bits/stdc++.h>
using namespace std;
int fibUsingTabulation(int n)
{
    int memo[n + 1];
    memo[0]=0, memo[1]=1;
    for(int i=2;i<=n;i++){
        memo[i]=fibUsingTabulation(i-1)+fibUsingTabulation(i-2);



    }
    return memo[n];
}
int main()
{

    int n;
    cin >> n;
    cout << fibUsingTabulation(n);
}