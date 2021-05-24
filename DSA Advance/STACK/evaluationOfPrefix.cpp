#include<iostream>
#include<stack>
#include<string>
using namespace std;
int evaluationOfPrefix(string &s){
    stack<int> st;
    int a,b;
    for (int i=s.size()-1;i>=0;i--)
    {
        /* code */
        if (s[i]!='+'&&s[i]!='-'&&s[i]!='/'&&s[i]!='*'){
            st.push(s[i]-'0');

        }
        else{

            a=st.top();
            st.pop();
            b=st.top();
            st.pop();
            if(s[i]=='+'){
                st.push(a+b);
            }
            
            else  if(s[i]=='-'){
                st.push(a- b);

            }
            else  if(s[i]=='*'){
                st.push(a*b);

            }
            else if(s[i]=='/'){
                st.push(a/b);

            } 

        }
        
    }
    return st.top();
}
int main()
{
    string s;
    cin>>s;
    cout<<evaluationOfPrefix(s);
          
}