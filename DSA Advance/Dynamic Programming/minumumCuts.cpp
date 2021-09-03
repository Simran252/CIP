#include<bits/stdc++.h>
using namespace std;
int minimumCutsUsingTabulation(int n, int a, int b, int c){
    int dp[n+1];
    dp[0]=0;
    for(int i=1;i<n+1;i++){
        dp[i]=-1;
        
        if((i-a)>=0){
            dp[i]=max(dp[i], dp[i-a]);
        }
        if(i-b>=0)

            dp[i]=max(dp[i], dp[i-b]);
        if(i-c>0)

            dp[i]=max(dp[i], dp[i-c]);

        if(dp[i]!=-1){
            dp[i]+=1;
        }

    }
    return dp[n];


}
int minimumCuts(int n, int a, int b, int c){
    if(n==0){
        return 0;

    }
    if(n<0){
        return -1;

    }


   int x= minimumCuts(n-a, a, b, c);
   int y= minimumCuts(n-b, a, b, c);
   int z= minimumCuts(n-c, a, b, c);

   int res= max(x, max(y, z));
   if(res==-1){
       return -1;
   }
   else{
       return res+1;
   }



}
int main(){

    int n, a, b, c;
    cin>>n>>a>>b>>c;
    cout<<minimumCuts(n, a, b, c)<<"\n"; 
    cout<<minimumCutsUsingTabulation(n, a, b, c);
}