// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<algorithm> 
#include<cstring>
#include<math.h>
#define d 256   
#define q 13
using namespace std;
 
void searchPatternUsingRabinKrapAlgo(const string &text,const string &pattern){     
    int m=text.size();
    int n=pattern.size();  
    int h=pow(d,n-1);   
    int p=0,t=0;
    //hash fun for pattern and text 
    for (int i = 0; i <n; i++)
    {  
       p=((p*d)+pattern[i])%q;
        t=((t*d)+pattern[i])%q;
        
    }
    for (int i = 0; i<=m-n; i++)
    {
        bool flag;
        /* code */
        if (p==t)
        {
            /* code */
            flag=true;
            for (int j = 0; j <n; j++)
            {
                //matching thr characters 
                if (pattern[j]!=text[j+n])
                {
                    /* code */
                    flag=false;
                    break;

                }
                if (flag==true)
                {
                    /* code */
                    cout<<i<<" ";
                }
            } 
        }
        if (i<m-n)
        {  
            /* code */ 
            t=((d*(t-text[i])*h)+text[i+n])%q;
            if (t<0)
            {
                /* code */
                t=t+q;
            }
            
        }
        

        
    }
    
    

    
   
     
}
int main(){
    int t; 
    cin>>t;
    while (t--)
    {  

        string text,pattern;
        cin>>text>>pattern;
        searchPatternUsingRabinKrapAlgo(text,pattern);     


        
    }
    
}