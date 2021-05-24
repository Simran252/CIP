#include<iostream>
#include<stack>
#include<string>
using namespace std;
int evaluatePostFix(string s){
    stack<int> st;
    int a,b,ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]==' '){
            
            continue;

        }
       else if(s[i]!='+'&&s[i]!='-'&&s[i]!='*'&&s[i]!='/'){
          
           st.push(s[i]-48);  

       }
  
    
        else{
            
            
                 a=st.top();
                st.pop();
                 b=st.top();
                st.pop();
                if(s[i]=='+'){
                    st.push(a+b); 


                }
                else if(s[i]=='-'){
                    
                    st.push(b-a);

                }
                else if(s[i]=='*'){
                     
                    st.push(a*b);
                }
                else if(s[i]=='/'){ 
                    st.push(b/a);

                } 
            
        }
        
    }
    return st.top();
}
int main(){
    string s;
    cin>>s;
    cout<< evaluatePostFix(s);

}