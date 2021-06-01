#include<iostream> 
using namespace std;  
int fact(string s,int n){
    int ans=1;
    for (int i = 0; i <n; i++)
    {
        /* code */
        ans=ans*s[i];
        
    }
    return  ans;
    

}
int efficientSolu(const string &text){
    char freq[256]; 
    int totalFact=fact(text,text.size());
    for (int i = 0; i <text.size(); i++)
    {
        freq[text[i]]++; 

    }
    for (int i = 0; i <256; i++)
    {
        /* code */ 
        freq[i]=freq[i-1]+freq[i];
        
    }   
    int res=1
    for (int i = 0; i<text.size(); i++)
    {
        /* code */ 
        totalFact=totalFact/(text.size()-i); 
        res=(freq[text[i]]-1)*totalFact;
         


    }
    
   

}
int lexoGraphicRank(const string &text){ 
    int count=0,res=0,ans=0;
    for (int i = 0; i <text.length()-1; i++)
    {
        count=0;
        
        /* code */
        for (int j=i+1; j<text.length();j++)
        {
            /* code */
            if (text[j]<text[i])
            {
                /* code */
                count++;

  
            }
          
            
        }
        res=fact(text.length()-i-1)*count;  
        ans+=res;

    }
    return ans+1;  
    

    }
int main(){  
    int t; 
    cin>>t;
    while (t--)
    {  

        string text;
        cin>>text;
        int ans=lexoGraphicRank(text);    
        cout<<ans<<"\n";
        efficientSolu(ans);  

        
    }

}