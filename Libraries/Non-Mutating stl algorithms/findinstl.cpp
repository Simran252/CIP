#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//find() fuction i stl works like linear search 
//  time comp=O(n)
void findFuncInStl(vector<int>::iterator it,vector<int>&v){
    
     if (it!=v.end()) 
    {
        cout<<"found "<<(*it)<<" at position "<<(it-v.begin());
       
    }else{
        cout<<"not found"<<"\n";

    }
    cout<<"\n";
}

int main(){
    
    vector<int> v={5, 10, 7, 10, 20};
    auto it=find(v.begin(),v.end(),10);
    findFuncInStl(it,v);
    
    it=find(v.begin()+2,v.end(),7);
    findFuncInStl(it,v);
                          
    it=find(v.begin(),v.end(),6);
    findFuncInStl(it,v);

    //find() fuct using arrays
    int arr[]={4,2,1,3,5};
    int*ptr=find(arr,arr+4,20);

        if (ptr==(arr+4)) 
        {
            cout<<"not found"<<"\n";

            
        
        }else{
            cout<<"found "<<(*ptr)<<" at position "<<(ptr-arr)<<" in array";
        
        }





   
    



}