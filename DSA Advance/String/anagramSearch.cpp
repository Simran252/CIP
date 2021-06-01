#include<iostream> 
using namespace std;  
bool areSame(char CT[],char CP[],int n){
    int c=0;
    for (int i = 0; i <256; i++)
    {
        /* code */
        if (CT[i]!=CP[i])
        {
            return false;
             
        }  
        
    }
    return true;
     

}
bool anagramSearch(const string &text,const string &pattern){ 
    char  CT[256]={0},CP[256]={0};

    []
    for (int i = 0; i <text.length(); i++)
    {
        /* code */
        CT[text[i]]++;
       

    }
    for (int i = 0; i <pattern.length(); i++)
    {
        /* code */
       CP[pattern[i]]++;
       

    }
     
    for (int i = 0; i <=(text.size()-pattern.size());i++)
    {
        /* code */
         
        if(areSame(CT,CP,256 ))
        {
            /* code */
            return true;
        }  
           
           CT[text[i-1]]--;
           CT[text[i+pattern.size()-1]]++;   
           
    }
        return false;
}
int main(){
    int t; 
    cin>>t;
    while (t--)
    {  

        string text,pattern;
        cin>>text>>pattern;
        int ans=anagramSearch(text,pattern);    
        ans==1?cout<<"yes":cout<<"no";
        cout<<"\n";


        
    }

}