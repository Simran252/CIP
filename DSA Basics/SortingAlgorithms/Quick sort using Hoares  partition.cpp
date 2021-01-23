#include<iostream>
using namespace std;
//Quick sort using hoares partition
void printArray(int arr[],int*n){
	cout<<"Array after sorting is"<<"\n";
	for(int i=0;i<(*n);i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
void swap(int*a,int*b){
	int c=*a;
	*a=*b;
	*b=c;
	
}
int partitionUsingHoares(int arr[],int low,int high){
	//Hoare's partition
	int i=low-1,j=high+1;
	int pivot=arr[low];
	while(true){
		do{
			i++;
			
		}while(arr[i]<pivot);
		
		do{
			j--;
			
		}while(arr[j]>pivot);
		if(i>=j){
			return j;
		}
		else{
			swap(&arr[i],&arr[j]);
		}
	}
	
	
} 
void quickSortUsingHoaresPartitionHelper(int arr[],int low,int high){
	
	if(low<high){
		int p=partitionUsingHoares(arr,low,high);
		quickSortUsingHoaresPartitionHelper(arr,low,p);
		quickSortUsingHoaresPartitionHelper(arr,p+1,high);
	}
	
	
}
void quickSortUsingHoaresPartition(int arr[],int*n){
	int low=0,high=(*n)-1;
	quickSortUsingHoaresPartitionHelper(arr,low,high);
		
}

int main(){
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements"<<endl;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	int size=sizeof(arr)/sizeof(arr[0]);
	quickSortUsingHoaresPartition(arr,&size);
	printArray(arr,&size);
	
}
