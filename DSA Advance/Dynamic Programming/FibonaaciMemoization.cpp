#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n, int memo[])
{
    //base case
    if (memo[n] == -1)
    {
        int res;
        if (n == 0 || n == 1)
        {
            res = n;
            
        }
        else
        {
            int a = fibonacci(n - 1, memo);
            int b = fibonacci(n - 2, memo);
            res=a+b;
        }
        memo[n]=res;
    }

    return memo[n];
}
int main()
{
    int n;
    cin >> n;
    int memo[n + 1];
    memset(memo, -1, sizeof(memo));
    cout << fibonacci(n, memo);
    // 0 1 1 2 3 5 8 13
}