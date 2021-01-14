#include<iostream>
using namespace std;

void swap(int arr[],int n,int a,int b){
	int c=arr[a];
	arr[a]=arr[b];
	arr[b]=c;
	
	
}
void bubbleSort(int arr[],int n){
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				swap(arr,n,j,j+1);
			}
		}
	}
	
}

void print(int arr[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}
int main(){
	int T;
	cout<<"Enter test cases"<<endl;
	cin>>T;
	while(T--){
		int n;
	cout<<"Enter size of array"<<endl;
	cin>>n;
	cout<<"Enter array"<<endl;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	bubbleSort(arr,n);
	print(arr,n);
	}
	
}
