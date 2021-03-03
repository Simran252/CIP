#include<iostream>
#include<set>
#include<vector>
#include<climits>
#include<algorithm>
#include<climits>
#include<set>
using namespace std;

void printVec(vector<int> &vec){
    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<"\n";
}
void ceilingOnRightEleEffective(int*arr,int n){
    int res[n];
    set<int> s;
    for (int i = n-1; i >=0; i--)
    {
        
        auto it=s.lower_bound(arr[i]);
        if (it==s.end())
        {
            res[i]=-1;
            
        }else
        {
            res[i]=*it;

            
        }
        s.insert(arr[i]);
        
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<res[i]<<" ";
    }
    


}
vector<int> ceilingOfRightEle(int*arr,int n){
    vector<int> v;
   //naive apptoach
   

   for (int i = 0; i < n; i++)
   {
       int minimum=INT_MAX;
       for (int j=i+1;j<n;j++)
       {
           if (arr[j]>=arr[i])
           {
               minimum=min(minimum,arr[j]-arr[i]);
           }
       }
       
       if (minimum==INT_MAX)
       {
          v.push_back(-1);
       }
       else{
           v.push_back(arr[i]+minimum);

       }

   }
   return v;
   

}
int main(){
    int T;
    cout<<"enter test cases"<<"\n";
    cin>>T;
    while(T--){
        
    int n;
    cout<<"Enter size"<<"\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> res=ceilingOfRightEle(arr,n);
    printVec(res);
    

    cout<<"effective solu using set cpntainer"<<"\n";
   ceilingOnRightEleEffective(arr,n);
}
}