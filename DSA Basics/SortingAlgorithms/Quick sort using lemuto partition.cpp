//Quick sort using Lomuto partion
#include<iostream>
using namespace std;

//input : 8 4 7 9 3 10 5
void printArray(int arr[],int n){
	cout<<"array after partition around a given pivot is"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}
void swap(int*a,int*b){
	int c=*a;
	*a=*b;
	*b=c;
	
}
int partition(int arr[],int low,int high){
	int i=low-1,j=low;
	int pivot=arr[high];
	while(j<=high-1){
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
			
		}
		j++;
	}
	swap(&arr[i+1],&arr[high]);
	return i+1;
}

void quickSortUsingLemutoPartitionHelper(int arr[],int low,int high,int n){
	if(high>low){//atleast two elements
		
		int p=partition(arr,low,high);
		quickSortUsingLemutoPartitionHelper(arr,low,p-1,n);
		quickSortUsingLemutoPartitionHelper(arr,p+1,high,n);
	}
}

void quickSortUsingLemutoPartition(int arr[],int n){
	
	quickSortUsingLemutoPartitionHelper(arr,0,n-1,n);
	
}

int main(){
	cout<<"Enter test cases"<<endl;
	int T;
	cin>>T;
	while(T--){
		int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	cout<<"Enter array elements"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	quickSortUsingLemutoPartition(arr,n);
	printArray(arr,n);
	}
}
