#include<iostream>
#include<set>
#include<algorithm>
#include<limits.h>
using namespace std;
void printSet(set<int>&s){
    for(auto i:s){
        cout<<i<<" ";
    }
    
    cout<<"\n";
}

int getFloor(set<int>&s,int c){

    auto it=s.lower_bound(c);
    if (it==s.begin())
    {
      if (*it==c)
      {
          /* code */
          return *it;
      }else
      {
          return INT_MAX;

      }
      
    }else{
        if (it!=s.end()&&(*it)==c)
        {
            /* code */
            return (*it);
        }
        it--;
        return (*it);

        
    }
}

int getCeiling(set<int>&s,int f){
    //using lower_bound () func
    auto it=s.lower_bound(f);
    if (it!=s.end())
    {
        /* code */
        return (*it);
    }else
    {
        return INT_MIN;

    }
}
int main(){
    set<int > s{10,20,5,25};
    printSet(s);
    int c;
    cout<<"enter no to find celing"<<"\n";
    cin>>c;
    int resciel=getCeiling(s,c);
    cout<<"ceiling of no is "<<resciel<<"\n";
    //floor if no
    int f;
    cout<<"enter no to find floor"<<"\n";
    cin>>f;
    int resFloor=getFloor(s,c);
    cout<<"ceiling of no is "<<resFloor<<"\n";
    



}