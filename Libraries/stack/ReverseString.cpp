#include<iostream>
#include<string>
#include<stack>
using namespace std;

void reverseStack(string &s){
    stack<char > st;

    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
  
     for(int i=0;i<s.length();i++){
         s[i]=st.top();
         st.pop();

     }
     //auxilary space =O(n)

}




void printString(string &s){
    cout<<"Reverse of string is "<<endl;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";

    }
}

int main(){
    string s;
    cout<<"Enter string"<<"\n";
    cin>>s;
    reverseStack(s);
    printString(s);
    
    
}