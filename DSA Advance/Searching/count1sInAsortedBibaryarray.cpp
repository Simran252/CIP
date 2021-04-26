#include<iostream>
using namespace std; 
int count1sinABinarySortedArray(int arr[],int n){
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if (arr[mid]<1)
        {
            //right
            low=(mid+1);


        }
        else{
            if (mid==0||arr[mid-1]!=arr[mid])
            {
                return mid;

            }else
            {
                high=mid-1;
                
            }
            
            
        }
        
    }
    return -1;
   

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
           int ans= count1sinABinarySortedArray(arr,n);
            if (ans==-1)
            {
                cout<<"0"<<"\n";
            } 
            else
            {
                cout<<(n-ans)<<"\n";
            }
            
            
    }
}