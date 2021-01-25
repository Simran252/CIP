#include<iostream>
using namespace std;
void printArray(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}

void countingSortGeneralApproach(int arr[],int n,int k){
	int count[k];
	for(int i=0;i<k;i++)
	{
		 count[i]=0;
	}
	
	for(int i=0;i<n;i++)
	{
		 count[arr[i]]=count[arr[i]]+1;
		 
	}
	//cumulative sum of count array
	for(int i=1;i<k;i++)
	{
		 count[i]=count[i-1]+count[i];
	}
	
	//compairing arr[] and count[] array
	int output[n];
	for(int i=n-1;i>=0;i--)
	{
		int index=count[arr[i]]-1;
		
		output[index]=arr[i];
		count[arr[i]]-=1;
		
	}
	//copy elements from output [] arr to original arr[]
	for(int i=0;i<n;i++){
		arr[i]=output[i];
		
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
	
	cout<<"Enter k"<<"\n";
	int k;
	cin>>k;
	
	countingSortGeneralApproach(arr,n,k);
	printArray(arr,n);
	
}
}
