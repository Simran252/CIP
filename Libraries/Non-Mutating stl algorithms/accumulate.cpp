#include<iostream>
#include<numeric>
#include<vector>
using namespace std;
int myfun(int x,int y){
    return x*y;

}
int main(){
    
    vector<int > v={10, 20, 30};
    int init_val=0;
    int res=accumulate(v.begin(),v.end(),init_val);
    cout<<res<<"\n";

    init_val=100;
     res=accumulate(v.begin(),v.end(),init_val);
    cout<<res<<"\n";


    //substraction
    cout<<"substraction is"<<" ";
    res=accumulate(v.begin(),v.end(),init_val,minus<int>());
    cout<<res<<"\n";

    //accumulate on user defined operation
    int mul=1;
    res=accumulate(v.begin(),v.end(),mul,myfun);
    cout<<"Multiply is "<<res<<"\n";
    
    


}