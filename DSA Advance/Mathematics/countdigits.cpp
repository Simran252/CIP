#include<iostream>
using namespace std;

int countDigits(int n){
    if (n/10==0)
    {
        return 1;
    }
    
    int a=countDigits(n/10)+1;
    return a;

}
int main(){
    int n;
    cout<<"enter n"<<"\n";
    cin>>n;
    int res=countDigits(n);
    cout<<res<<"\n";

}