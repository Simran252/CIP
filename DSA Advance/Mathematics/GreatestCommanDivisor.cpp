#include<iostream>
#include<algorithm>
using namespace std;
int greatestCommanDivisorUsingEuclideanAlgo(int a,int b){
    while(a!=b)
    {
      if (a>b)
      {

          a=a-b;
      }
      else if (b>a)
      {
          b=b-a;
      }
      
      
    }
    return a;
    
    


}
int greatestCommanDivisor(int a,int b){
    int minimum=min(a,b);

    while (minimum>0)
    {
        if (a%minimum==0&&b%minimum==0)
        {
            break;
        }
        minimum--;
        
       
    }
    return minimum;

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
        cout<<"using naive approach gcd is"<<"\n";

        int ans=greatestCommanDivisor(a,b);
        cout<<ans<<"\n";
        cout<<"using effective approach gcd is"<<"\n";

        int ansEffectove=greatestCommanDivisorUsingEuclideanAlgo(a,b);
        cout<<ans<<"\n";

    }
    
    

    

}