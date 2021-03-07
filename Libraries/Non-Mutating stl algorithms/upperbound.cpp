#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){

    vector<int> vec{1,3,4,4,4,4,5,6};
    auto i=upper_bound(vec.begin(),vec.end(),1);
    cout<<(*i)<<" "<<"position "<<(i-vec.begin());
    cout<<"\n";

    i=upper_bound(vec.begin()+1,vec.end(),2);
    cout<<(*i)<<" "<<"position "<<(i-vec.begin())<<"\n";

    //to get no of occcuremces of element
    auto it1=lower_bound(vec.begin(),vec.end(),4);
    auto it2=upper_bound(vec.begin(),vec.end(),4);
    //indexs
    int a=it1-vec.begin();
    int b=it2-vec.begin();

    cout<<"no of occcurences of ele 4 is "<<(b-a)<<"\n";

    //check if an element exist using upper bound
    int x;
    cout<<"enter elem to search"<<"\n";
    cin>>x;
    
    
    auto ite=upper_bound(vec.begin(),vec.end(),x);
    if (ite!=vec.begin()&&(*(ite-1)==x))
    {
            cout<<"present"<<"\n";
    }else
    {
         cout<<"not present"<<"\n";
    }
    

    //upper bound on arrays 
    int arr[]={3,4,5,6,7};
    auto itarr=upper_bound(arr,arr+5,7);
    if (itarr==arr+5)
    {
       cout<<"not "<<"\n";
    }
    else
    {
        cout<<(*itarr)<<" "<<(itarr-arr);
    }
    
    
    

    
}