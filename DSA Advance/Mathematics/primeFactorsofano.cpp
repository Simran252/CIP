#include<iostream>
#include<algorithm>
using namespace std;
bool isPrime(int n){

    if (n==1)
    {
        return 0;
    }
     if(n==2||n==3)
    {
        return 1;
    }
     if(n&2==0||n%3==0)
    {
        return 0;
    }

    for (int i = 5; i < count; i++)
    {
        /* code */
    }
    
   
    
    
    

}
void primeFactors(int a){

    for (int i = 2; i < n; i++)
    {
        isPrime(i);

    }
    

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
        

        primeFactors(a);
        
        
      

       
    }
    
    

    

}