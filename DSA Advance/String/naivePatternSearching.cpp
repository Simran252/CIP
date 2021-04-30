// #include<bits/stdc++.h>
#include<iostream>
#include<string>
//cstring contains memset function
#include<cstring>
using namespace std;
void naiveAlgoForDistinctCharacters(const string &s1,const string &s2){   
    //this takes theta(n ) time compelxity bcz we have reduced no of operatoios  
    int m=s1.length();  
    int n=s2.length();
    for (int i = 0;i<=(m-n);)
    {  
        int j;   
        for (j = 0; j<n;j++)
        {
            if (s1[i+j]!=s2[j])
            {
                /* code */    
   
                break; 
            }
            
        } 

        if (j==n)
        {
            /* code */
            cout<<i<<" ";
            i=i+j;
            continue;
        }
        i++;
          
    }
    cout<<"\n"; 
    

}
void naivePatternSearching(const string &s1,const string &s2){ 
    int m=s1.length();
    int n=s2.length();
    for (int i = 0;i<=(m-n); i++)
    {  
        int j;
        for (j = 0; j<n;j++)
        {
            if (s1[i+j]!=s2[j])
            {
                /* code */    

                break; 
            }
            
        }
        if (j==n)
        {
            /* code */
            cout<<i<<" ";
        }
        
        
    }
    cout<<"\n"; 
    
}
int main(){
    int t;
    cin>>t;
    while (t--)
    { 
        string s1,s2;
        cin>>s1>>s2;
        naivePatternSearching(s1,s2);
        naiveAlgoForDistinctCharacters(s1,s2);
        cout<<"having disctinit ele"<<"\n";

        
    }
    
}