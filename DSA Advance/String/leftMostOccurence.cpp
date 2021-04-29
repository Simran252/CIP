// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;
int efficientApproach(const string &s1){
    //using one traversal
    int n=s1.size();
    int visited[256];
    memset(visited,-1,sizeof(visited));  
    
    cout<<"\n";
    
    int res;
    for (int i=s1.size();i>=0;i--)
    {    
        if (visited[s1[i]]!=-1){
            res=i;


        }    
        else{

        visited[s1[i]]=0;  
        }

    }
    return res;

}

int leftMostOccurence(const string &s1){
    //this apprpach requires two traversl of input array
    int freq[256]={0};
    for (int i = 0; i <s1.size(); i++)
    {
        freq[s1[i]]++;

    }  
    for (int i = 0; i <s1.size(); i++)
    {
        if (freq[s1[i]]>1)
        {
            return i;

        }
        
        
    }
    return -1;
  

    
}
int main(){
    int t;
    cout<<"Enter test cases "<<"\n";
    cin>>t;
    while (t--)
    { 
        string s1; 
        cin>>s1;
        int ans=leftMostOccurence(s1);
        cout<<ans<<"\n"; 
        cout<<"using effieient approach "; 
        int res=efficientApproach(s1);  
        cout<<res<<"\n";
        
    }
    
}