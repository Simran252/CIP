#include<iostream>
using namespace std;  
bool checkRotations(const string &s1,const string &s2){
    if (s1.size()!=s2.size())
    {
        /* code */
        return 0;
    } 
    return ((s1+s2).find(s2)!=string::npos);


}
int main(){
    int t; 
    cin>>t;
    while (t--)
    {  

        string s1,s2;
        cin>>s1>>s2;
        int ans=checkRotations(s1,s2);    
        ans==1?cout<<"yes":cout<<"no";
        cout<<"\n";


        
    }

}