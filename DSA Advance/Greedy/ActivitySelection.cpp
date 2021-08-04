#include<bits/stdc++.h>
using namespace std;

    static bool myCmp(pair<int,int> a,pair<int,int> b){
        //    5 4
            if(a.second>b.second){

                return false;
            }
            return true;

        }


int activitySelection(vector<pair<int,int>> vec){
    int resMax=1;
    int maximum=vec[0].second;
    int res=0;
    for(int i=1;i<vec.size();i++){
        if(maximum<=vec[i].first){
            resMax+=1;
            maximum=vec[i].second;
            res=resMax;

        }
    }
    return res;
  
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> vec(n);
    for(int i=0;i<n;i++){
        pair<int,int> p;
        int fir,sec;
        cin>>fir>>sec;
        vec[i]=make_pair(fir,sec);
    }
    cout<<activitySelection(vec);
}