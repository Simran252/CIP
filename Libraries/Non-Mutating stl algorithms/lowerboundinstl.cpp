#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//lower_bouund() works on sorted stream of data
// lower_bound() internally uses binary serach
// time complexity=O(logn)
int main(){
    vector<int> v{10,20,30,40,50,60};
     vector<int>::iterator it=lower_bound(v.begin(),v.end(),10);
     if (it==v.end())
     {
         cout<<"Not found";
     }else{
         cout<<"ele "<<(*it)<<" at position"<<(it-v.begin());
     }
     cout<<"\n";

     it=lower_bound(v.begin(),v.end()-2,89);

      if (it==v.end()-2)
     {
         cout<<"Not found";
     }else{
         cout<<"ele "<<(*it)<<" at position"<<(it-v.begin());
     }
     cout<<"\n";

      it=lower_bound(v.begin(),v.end()-2,40);

      if (it==v.end()-2)
     {
         cout<<"Not found";
     }else{
         cout<<"ele "<<(*it)<<" at position"<<(it-v.begin());
     }
     cout<<"\n";
     
     //lower_bound() on arrays
     cout<<"lower_bound() on arrays"<<"\n";
     int arr[]={1,2,5,6,9,10};
     int*ptr=lower_bound(arr,arr+6,9);
     if (ptr!=arr+6)
     {
        cout<<"ele "<<(*ptr)<<" at position"<<(ptr-arr);
     }else{
         cout<<"Not found";
     }
     cout<<"\n";

     ptr=lower_bound(arr+2,arr+4,5);
     if (ptr==arr+4)
     {
          cout<<"Not found";
     }else{
         cout<<"ele "<<(*ptr)<<" at position"<<(ptr-arr);
     }
      cout<<"\n";

      ptr=lower_bound(arr+2,arr+4,11);
     if (ptr==arr+4)
     {
          cout<<"Not found";
     }else{
         cout<<"ele "<<(*ptr)<<" at position"<<(ptr-arr);
     }
      cout<<"\n";

      ptr=lower_bound(arr,arr+6,3);
     if (ptr==arr+6)
     {
          cout<<"Not found";
     }else{
         cout<<(*ptr);
     }
      cout<<"\n";

      ptr=lower_bound(arr+2,arr+4,1);
     if (ptr==arr+4)
     {
          cout<<"Not found";
     }else{
         cout<<(*ptr);
     }
      cout<<"\n";

      //binary_serach() on array using lower_bound() func
      ptr=lower_bound(arr,arr+6,9);
      if (ptr==(arr+6)||(*ptr)!=9)
      {
          cout<<"element not found in array"<<"\n";
      }else{
          cout<<"element found in array at position"<<(ptr-arr)<<"\n";
      }
      
     


}