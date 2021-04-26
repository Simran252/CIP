#include<iostream>
#include<algorithm>
using namespace std;
int leastCommanMultipleEffectiveSolution(int a,int b){
    //finding gcd
    if (b==0)
    {
       return a;
    }
    int gcd=leastCommanMultipleEffectiveSolution(b,a%b);
    int lcm=(a*b)/gcd;


    

}
int leastCommanMultiple(int a,int b){
    int res=max(a,b);
    while (true)
    {
       if (res%a==0&&res%b==0)
       {
           return res;
           break;
       }
       res++;
       
    }
    

}

int main(){
    int t;
    cout<<"enter test caeses"<<"\n";
    cin>>t;
    while (t--)
    {
        int a,b;
        cout<<"enter a and b"<<"\n";
        cin>>a>>b;
        cout<<"using naive approach lcm is"<<"\n";

        int ans=leastCommanMultiple(a,b);
        cout<<ans<<"\n";
        cout<<"using effective approach lcm is"<<"\n";
        
        int ansEffec=leastCommanMultipleEffectiveSolution(a,b);
        cout<<ans<<"\n";


       
    }
    
    

    

}