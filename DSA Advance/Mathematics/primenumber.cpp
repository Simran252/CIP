#include<iostream>
#include<algorithm>
using namespace std;

bool checkPrimeEffectiveApproach(int a){
    if (a==1)
    {
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        
        
    }
    
    

}
bool checkPrime(int a){
    if (a==1)
    {
        return 0;
    }
    
    for (int i = 2; i <a ; i++)
    {
        if (a%i==0)
        {
            return 0;
            break;
            
        }
        
    }
    return 1;
}

int main(){
    int t;
    cout<<"enter test caeses"<<"\n";
    cin>>t;
    while (t--)
    {
        int a,b;
        cout<<"enter no "<<"\n";
        cin>>a;
        

        int ans=checkPrime(a);
        if (ans==0)
        {
           cout<<a<<" is not prime"<<"\n";
        }
        else
        {
             cout<<a<<" is prime"<<"\n";
        }
        
        
        
        cout<<"using effective approach"<<"\n";
        
        int ansEffec=checkPrimeEffectiveApproach(a,b);
        cout<<ans<<"\n";


       
    }
    
    

    

}