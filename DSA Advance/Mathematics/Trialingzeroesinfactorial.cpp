#include<iostream>
using namespace std;

int effectiveSolution(int n){
    int ans=0;
    for (int i = 5; i <=n; i*=5)
    {
        ans=ans+(n/i);
    }
    return ans;

}
int trailingZerosInFactorial (int n){
    //find fact
    int res=1;
    for (int i = 2; i <=n; i++)
    {
        res=res*(i);

    }
    
    //count tariling zeroes
    int count=0;
    while (res%10==0)
    {
        count++;
        res=res/10;


        
    }
    return count;

}
int main(){
    int n;
    cout<<"enter n"<<"\n";
    cin>>n;
    int res=trailingZerosInFactorial(n);
    cout<<res<<"\n";
    cout<<"effective solution"<<"\n";
    int a=effectiveSolution(n);
    cout<<a<<"\n";
    

}