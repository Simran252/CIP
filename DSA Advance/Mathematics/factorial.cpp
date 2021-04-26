#include<iostream>
using namespace std;



int factorial (int n){
    if (n==0||n==1)
    {
        return 1;
    }
    

    int ans=factorial(n-1);
    return ans*n;
}
int main(){
    int n;
    cout<<"enter n"<<"\n";
    cin>>n;
    int res=factorial(n);
    cout<<res<<"\n";




}