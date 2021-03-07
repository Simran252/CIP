#include<iostream>
#include<algorithm>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    // time complexity =O(n)
    vector<int> vec{4,3,5,6,7,-1,5,3,5};
    cout<<(count(vec.begin(),vec.end(),5))<<"\n";

    cout<<(count(vec.begin(),vec.end(),11));




}