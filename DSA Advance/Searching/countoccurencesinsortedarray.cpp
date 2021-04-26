#include<iostream>
using namespace std;

    
    // 7
// 1 10 10 10 20 30 40
int lastOccuurence(int arr[],int n,int k){

}
int firstOccuurence(int arr[],int n,int k){
    int low=0,high=n-1,mid;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (arr[mid]<k)
        {
            //right
            low=(mid+1);

        }
        else if (arr[mid]>k)
        {
            //left
            high=(mid-1);
        }
        else{
            if (mid==0||arr[mid]!=arr[mid-1])
            {
                return high;
            }
            else{
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
        int k;
        cout<<"enter k"<<"\n";
        cin>>k;
        cout<<"Enter arr ele"<<"\n";
        int arr[n];
            for (int i = 0; i < n; i++)
            {
                cin>>arr[i];
            }
            countOccurencesInSortedArray(arr,n,k);
    }
}