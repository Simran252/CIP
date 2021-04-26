#include<iostream>
#include<unordered_set>
#include<vector>
using namespace std;

vector<int> usingHashing(int a[],int b[],int n,int m){
    int count=0;
    vector<int> v;
        // Your code goes here4
        unordered_set<int> set;
        set.insert(a,a+n);//theta(n)
        for(int i=0;i<m;i++){//0(m)
            if(set.find(b[i])!=set.end()){
                v.push_back(b[i]);
                count++;
                set.erase(b[i]);
                
            }
        }
return v;
//time com=O(m+n)
//auxi space=O(m+n)



}
vector<int> intersectionOfUnsortedArrays(int arr1[],int arr2[],int m,int n){
    vector<int> v;
    int flag=false;
    for (int i = 0;i <m; i++)
    {
        if (i!=0&&arr1[i-1]==arr1[i])
        {
            /* code */
            flag=true;
            

        }
        
    if (flag==false)
       {
           for (int j = 0; j<n; j++)
           {
               if (arr1[i]==arr2[j])
               {
                   v.push_back(arr1[i]);
                   break;
                   
               }
               
           }
           
       }
       flag=false;
       

    }
    return v;
    

}

int main(){
   cout<<"Enter test cases"<<"\n";
    int t;
    cin>>t;
    while (t--)
    {
        int m,n;
        cin>>m>>n;
        int arr1[n],arr2[m];
        for (int i = 0;i<m; i++)
        {
            cin>>arr1[i];
        }
        for (int i = 0;i<n; i++)
        {
            cin>>arr2[i];
        }
        // vector<int> v= intersectionOfUnsortedArrays(arr1,arr2,m,n);
        // cout<<"Intersection using naive app "<<"\n";
        // for (auto i:v)
        // {
        //     cout<<i<<" ";
        // }
        
        cout<<"\n";
        cout<<"Intersection is "<<"\n";
        vector<int> v= usingHashing(arr1,arr2,n,m);
        for (int i:v) 
        {
            cout<<i<<" ";
        }
        cout<<"\n";
        


    }
    
}