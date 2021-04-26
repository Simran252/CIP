#include<iostream>
using namespace std;

bool pallindrome(int n){
     //reverse
     int tn=n;
     int rev=0;
     while (n>0)
     {
         int r=n%10;
      
        
        rev=(rev*10)+r;
          n=n/10;

     }
     return (rev==tn);
    
    

}
int main(){
    int n;
    cout<<"enter n"<<"\n";
    cin>>n;
    bool res=pallindrome(n);
    cout<<res<<"\n";

}