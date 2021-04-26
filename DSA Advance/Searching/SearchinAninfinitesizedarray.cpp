#include<iostream>
using namespace std;

int binarySearch(int arr[],int l,int h,int x){
  
   while (l<=h)
   {
        int mid=(l+h)/2;
       if (arr[mid]==x)
       {
           return mid;
       }
       else if(arr[mid]<x){
           //right
           l=mid+1;

       }
       else if(arr[mid]>x){
           //left
           h=mid-1;
           
       }
       
   }
   return -1;
   
    
}
int searchInInfinteSizedArrayEfficentApproach(int arr[],int x){
    if(arr[0]==x) return 0;
    int i=1;
    while (true)
    {
        

        if (arr[i]==x) return i;

        else if(arr[i]>x)
        {
            //left side
            int in= binarySearch(arr,i/2+1,i,x);
            return in;
        }
        i*=2;


    }
    
    
    
    
    
}
int searchInInfinteSizedArray(int arr[],int x){
    //naive approach
    int i=0;
    while (true)
    {
        if (arr[i]==x) return i;
        if (arr[i]>x) return -1;
        i++;
        
    }
}

int main(){
    
    int arr[]={3, 5, 7, 9, 10, 90, 100, 130,140, 160, 170};
     cout<<"enter elem to search in array"<<"\n";
    int x;
    cin>>x;
   
    int ans=searchInInfinteSizedArray(arr,x);
    cout<<ans<<"\n";

    int anse=searchInInfinteSizedArrayEfficentApproach(arr,x);
    cout<<anse<<"\n";

}