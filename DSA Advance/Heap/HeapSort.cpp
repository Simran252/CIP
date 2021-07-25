#include<bits/stdc++.h>
using namespace std;
void maxHeapify(int arr[],int n,int i){
    int largest=i;
    int left=(2*i)+1,right=(2*i)+2;
    if(left<n&&(arr[largest]<arr[left])){
        largest=left;


    }
    if(right<n&&arr[largest]<arr[right]){
        largest=right;

    }

    if(largest!=i){
        swap(arr[i],arr[largest]);
        i=largest;
        maxHeapify(arr,n,largest);


    }


}
void buildHeap(int*arr,int n){
    for (int i=(n-2)/2;i>=0;i--)
    {
        /* code */
        maxHeapify(arr,n,i);
    }
}

void heapSort(int*arr,int n){
    //build max heap
    buildHeap(arr,n);
    
    for (int j =n-1;j>=1;j--)
    {
        /* code */
        swap(arr[0],arr[j]);
        
        maxHeapify(arr,j,0);


    }
    
    
      
}

int main(){
    int n;
    cin>>n;
    cout<<"enter array size"<<"\n";
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heapSort(arr,n);
    for (int i = 0; i <n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
    

}