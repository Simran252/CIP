// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;
//left will do it

int leftMostRepeatingOccurence(const string &s1){ 
    int res=-1;
    int visited[256];
    memset(visited,-1,sizeof(visited));  
    for (int i=s1.size();i>=0 ;i--)
    {
        if (visited[s1[i]]==-1)
        {
            /* code */ 
            visited[s1[i]]=1;

            res=i;

        }
        
    }

    return res;



}
int main(){
    int t;
    cout<<"Enter test cases "<<"\n";
    cin>>t;
    while (t--)
    { 
        string s1; 
        cin>>s1;
        int ans=leftMostRepeatingOccurence(s1);
        cout<<ans<<"\n"; 
        
    }
    
}