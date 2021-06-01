// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm> 
#include<cstring>
using namespace std;

void reverse(string &s1,int start, int end){  
    while(start<=end)
    { 
        swap(s1[start],s1[end]);
        start++;
        end--;

          
    }
    

}
void reverseWordsInAString( string &s1){   
    int n=s1.size();
    int start=0;
    for (int i = 0; i <n; i++)  
    {
        if (s1[i]==' ') 
        {    
            reverse(start,i-1);
            start=i+1;
             
        }
         
    }   
     
    
     
}
int main(){
    int t; 
    cin>>t;
    while (t--)
    { 
        string s1;  
        cout<<"Enter string "<<"\n";
        getline(cin,s1); 
        reverseWordsInAString(s1);    


        
    }
    
}