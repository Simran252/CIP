// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;
void printFrequency(string &s){
    int count[26];
    //initialize the array by 0
     memset(count, 0,sizeof(count));
     for (int i = 0; i <s.size(); i++)
     {
         count[s[i]-'a']+=1;
          
     }
    for (int i = 0; i <26; i++)
    {
        if (count[i]>0)
        {
            cout<<"char "<<char(i+'a')<<" value "<<count[i]<<"\n";
        }
        
    }
     
}
int main(){
    int t;
    cin>>t;
    while (t--)
    { 
        string s;
        cin>>s;
        int count[26]={0};
        printFrequency(s);

        
    }
    
}