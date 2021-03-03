#include<iostream>
#include<set>
using namespace std;

void printSet(set<int>&s){
    for(auto i:s){
        cout<<i<<" ";
    }
    
    cout<<"\n";
}
void lowerBoundFunc(set<int>::iterator its3,set<int >&set3){
     if (its3!=set3.end())
    {
        cout<<(*its3)<<" ";
    }
    else{
        cout<<"given element is Greater than largest"<<endl;

    }
    cout<<"\n";
}


int main(){

    set<int> s;
    //default oder of set is increasing order
    s.insert(10);
    s.insert(5);
    s.insert(20);
    printSet(s);
    
    //decresing order set
    set<int,greater<int>> s2;
    s2.insert(10);
    s2.insert(11);
    s2.insert(-1);

    cout<<"Decreasing order set"<<"\n";
    for(set<int> ::iterator it=s2.begin();it!=s2.end();it++){
            cout<<*it<<" ";

    
    }
    cout<<"\n";

    //inserting dublicates valuues
    s.insert(10);
    s.insert(11);
    printSet(s);

    //find()
    auto it=s.find(71);
    if (it==s.end())
    {
        /* code */
        cout<<"element  not found"<<"\n";
    }
    else{
        cout<<"Element  found"<<"\n";
    }

    //clear()
    s2.clear();
    for(auto i:s2){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<s2.size()<<"\n";

    //count()
    if (s.count(11))
    {
        cout<<"Element found"<<"\n";
    }
    else{
        cout<<"Element not found"<<"\n";
    }

    
    //erase()
    s.erase(11);
    cout<<"After erase set is "<<"\n";
    printSet(s);

    //erase() using iterator
    auto itErase=s.find(5);
    s.erase(itErase);
    printSet(s);

    //lower_bound()
    set<int> set3;
    set3.insert(10);
    set3.insert(5);
    set3.insert(20);

    cout<<"Lower bound func"<<"\n";
    auto its3=set3.lower_bound(5);
   lowerBoundFunc(its3,set3);
    its3=set3.lower_bound(7);
   lowerBoundFunc(its3,set3);

    its3=set3.lower_bound(90);
    lowerBoundFunc(its3,set3);
    
    //upper bound
     cout<<"upper bound func"<<"\n";
    auto itup=set3.upper_bound(5);
    lowerBoundFunc(itup,set3);
     itup=set3.upper_bound(8);
    lowerBoundFunc(itup,set3);
     itup=set3.upper_bound(78);
    lowerBoundFunc(itup,set3);
    


}