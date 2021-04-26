#include<iostream>
using namespace std;
int effectiveSoluLastOccu(int arr[],int n,int k,int low,int high){
    while (low<high)
    {
        int mid=(low+high)/2;
         if (arr[mid]>k)
        {
            //left
            high=mid-1;
        }
        else if(arr[mid]<k){
            //giht
            low=mid+1;


        }
        else
        {
             if (arr[mid+1]==arr[mid])
             {
                 low=mid+1;

             }
             else{
                 return mid;
             }
             
        }
        
    }
    
    return -1;
    
  
}

int effectiveSoluUSingBinarySearch(int arr[],int n,int k,int low,int high){
    while (low<high)
    {
        int mid=(low+high)/2;
        if (arr[mid]<k)
        {
            //right
            low=mid+1;

        }
        else if(arr[mid]>k)
        {
            //left
            high=mid-1;
            
        }
        else 
        {
            if (arr[mid]==arr[mid-1])
            {
                return mid-1;
            }
            else
            {
                return mid;
            }
        }
        
        
    }
    return -1;
    


    
}
int effectiveSolu(int arr[],int n,int k){
    //using biary serch
    int ans=effectiveSoluUSingBinarySearch(arr,n,k,0,n-1);
    return ans;

}
void firstOccurenceOfElementInArray(int arr[],int n,int k){ 
    
    for (int i = 0; i < n; i++)
    {
        
        if (arr[i]==k)
        {
           
            cout<<i<<" "<<"\n";
            break;
        }
    }
    
    // 7
// 1 10 10 10 20 30 40

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
        int k;
        cout<<"enter k"<<"\n";
        cin>>k;
        cout<<"Enter arr ele"<<"\n";
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        // }
        // firstOccurenceOfElementInArray(arr,n,k);
        // int res=effectiveSolu(arr,n,k);
        // cout<<"first occurence   is"<<res<<"\n";
        int last=effectiveSoluLastOccu(arr,n,k,0,n-1);
        cout<<"last ocuurence   is"<<last<<"\n";

        


        
    }
    }
}