#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int minimumDifferenceInArrayEfficientApp(int arr[],int n){
    int mini=INT_MAX;
    sort(arr,arr+n);
    for (int i = 1; i < n; i++)
    {
        mini=min(mini,arr[i]-arr[i-1]);

    }
    return mini;

    

} 
int minimumDifferenceInArray(int arr[],int n){
    int mini=INT_MAX,diff;
    for (int i = 0; i < n; i++)
    {
      for (int j = i+1; j < n; j++)
      {
            mini=min(mini,abs(arr[i]-arr[j]));

      }
      
    }
    
    return mini;
}
int main(){
    int t;
    cout<<"Enter test casees"<<"\n";
    cin>>t;
    while (t--)
    {
        int n;
        cout<<"enter size of array"<<"\n";
        cin>>n;
      
        cout<<"Enter arr ele"<<"\n";
        int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
        int ans=minimumDifferenceInArray(arr,n);
        cout<<"ans is "<<ans<<"\n";

        int ans2=minimumDifferenceInArrayEfficientApp(arr,n);
        cout<<"using efficinet approach "<<ans2<<"\n";
            
    }
}
