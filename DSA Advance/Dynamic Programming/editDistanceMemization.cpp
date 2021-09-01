#include <bits/stdc++.h>
using namespace std;
int editDistanceMemo(string s1, string s2, int m, int n)
{
    //base case
    if(m==0&&n==0){
        return 0;
    }
     

    if(m==0&&n!=0){
        return n;

    }
    if(n==0&&m!=0){

        return m;
    }


    if (s1[m-1] == s2[n-1])
    {
        return editDistanceMemo(s1, s2, m - 1, n - 1);
    }
    else
    {
        //replace
        int a = 1+editDistanceMemo(s1, s2, m - 1, n - 1);
        //insert
        int b = 1+editDistanceMemo(s1, s2, m, n - 1);
        //delete
        int c = 1+editDistanceMemo(s1, s2, m - 1, n);
        return min(a, min(b, c));
    }
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        string s1, s2;
        cin>>s1>>s2;
        int m = s1.length();
        int n = s2.length();
        cout<<editDistanceMemo(s1, s2, m , n );
    }
    
}
