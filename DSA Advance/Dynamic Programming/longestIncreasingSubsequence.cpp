#include <bits/stdc++.h>
using namespace std;
int longestIncreasingSequence(int arr[], int n){
    int dp[n];
    fill_n(dp, n, 1);

    int curr=0;
    for(int i=1;i<n;i++){

        for(int j=0;j<=i-1;j++){
            if(arr[j]<arr[i]){
                
                dp[i]=max(dp[i],dp[j]+1);

            }
        }

    }
    return *(max_element(dp, dp+n));

}
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];

        }
        cout << longestIncreasingSequence(arr, n);
    }
}
