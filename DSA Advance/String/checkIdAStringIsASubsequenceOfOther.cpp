// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;
bool checkSubsequence(const string &s1,const string &s2){
    //corner case
    if (s1.size()<s2.size())
    {
        return false; 
    }
    
    if (s2.size()==0)
    {
       return true;
    }

    int i=0,j=0,count=0;
    while (i<s1.size()&&j<s2.size())
    {
        if (s1[i]==s2[j])
        {
            i++;
            j++;
            count++;

        }
        else {
            i++;
            
        }

    }
    if (count==s2.size()) return true ;
    else return false;
    
    
     

    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    { 
        string s1,s2;
        cin>>s1>>s2;
        int ans=checkSubsequence(s1,s2);
        ans==1?cout<<"true":cout<<"false"<<"\n"; 
        
    }
    
}