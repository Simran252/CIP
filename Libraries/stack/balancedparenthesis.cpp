#include<iostream>
#include<string>
#include<stack>
using namespace std;
bool balancedParanthesis(string &s){
    stack<char > st;
    int ans=-1;
    for (int i = 0; i < s.length();)
    {
        if(s[i]=='('||s[i]=='['||s[i]=='{')
        {
            st.push(s[i]);
            i++; 
        }
        else {
            if(st.empty()==true){
                return false;
                
            }
            if(st.top()=='['&&s[i]==']'||st.top()=='('&&s[i]==')'||st.top()=='{'&&s[i]=='}'){
                st.pop();
                    i++;

            }
            else{
                ans=1;
               break;

            }
        }

    }
    if(ans==1||st.empty()==false){
        return false;
    }else{
        return true;
    }

}

int main(){
    string s2;
    cout<<"Enter string s2"<<"\n";
    cin>>s2;
    cout<<"balance ans is "<<balancedParanthesis(s2);

}