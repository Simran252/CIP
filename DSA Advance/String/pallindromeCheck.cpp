// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;
bool pallindromeCheck(string &s){
    for (int i = 0; i <s.size()/2; i++)
    {
        if (s[i]!=s[s.size()-1-i])
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
        string s;
        cin>>s;
        int ans=pallindromeCheck(s);
        ans==1?cout<<"string is pallindrome":cout<<"string is not pallindrome"<<"\n"; 

        
    }
    
}