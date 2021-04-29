// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;


bool checkAnagram(const string &s1,const string &s2){
    const int size=256;
    if (s1.size()!=s2.size())
    {
        /* code */
        return false;

    }
    int freq[size]={0};
    for (int i = 0; i <s1.size(); i++)
    {
        //using char as indeicfex
        freq[s1[i]]++;
        freq[s2[i]]--;

    }
    
    for (int i = 0; i <256 ; i++)
    {
        if (freq[i]!=0)
        {
            return false;
        }
        
    }
    return true;

    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    { 
        string s1,s2;
        cin>>s1>>s2;
        int ans=checkAnagram(s1,s2);
        ans==1?cout<<"string is anagram":cout<<"string is not anagram"<<"\n"; 

        
    }
    
}