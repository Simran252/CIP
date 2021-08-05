#include<bits/stdc++.h>
using namespace std;
bool mycmp(pair<int,int> &a,pair<int,int> &b){
    double a1=double(a.second/a.first);
    double b1=double(b.second/b.first);


    if(a1>b1){
        //dec order

        return true;
    }
    return false;

}
double knapSack(vector<pair<int,int>> &knapsack,int n,int capacity){
    //sort acc to first values
    double ans=0.0;
    sort(knapsack.begin(),knapsack.end(),mycmp);
    for(auto it:knapsack){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    for(int i=0;i<n;i++){
        if(knapsack[i].first<=capacity){
            ans+=(knapsack[i].second);
            capacity=capacity-knapsack[i].first;
        }
        else{
            ans+=(knapsack[i].second*capacity)/knapsack[i].first;
            break;
        }
    }

    return ans;
}


int main(){
    cout<<"enter capacity"<<"\n";

    int capacity;
    cin>>capacity;
    cout<<"enter array size"<<"\n";
    int n;
    cin>>n;
    vector<pair<int,int>> knapsack(n);
    for(int i=0;i<n;i++){
        pair<int,int> p;
        int weight,value;
        cin>>weight>>value;
        knapsack[i]=make_pair(weight,value);
    }
    cout<<knapSack(knapsack,n,capacity);
    

}