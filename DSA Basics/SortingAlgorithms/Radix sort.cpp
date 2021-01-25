#include<iostream>
#include<limits.h>
using namespace std;
void printArray(int arr[],int n){
	cout<<"After sorting array is "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}

void countingSort(int arr[],int n,int exp){
	int count[10],output[n];
	//initialize count arr with 0
	for(int i=0;i<10;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		count[(arr[i]/exp)%10]+=1;
	}
	//cumulative sum
	for(int i=1;i<10;i++)
	{
		count[i]=count[i-1]+count[i];
		
	}
	
	//compairing arr[] and count[]
	for(int i=n-1;i>=0;i--){
		int index=count[(arr[i]/exp)%10]-1;
		output[index]=arr[i];
		count[(arr[i]/exp)%10]-=1;
		
	}
	//copy elements back to original array
	for(int i=0;i<n;i++){
		arr[i]=output[i];
		
	}
	
	
}

void radixSort(int arr[],int n){
	//find max
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max)
		{
			max=arr[i];
			
		}
	}
	for(int exp=1;max/exp>0;exp=exp*10)
	{
		countingSort(arr,n,exp);
	}
	
	
	
	
}
int main(){
	int T;
	cout<<"Enter test cases"<<endl;
	cin>>T;
	while(T--){
		int n;
	cout<<"Enter size of 1st array"<<endl;
	cin>>n;
	cout<<"Enter array ele"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	
	radixSort(arr,n);
	printArray(arr,n);
	
}
}
