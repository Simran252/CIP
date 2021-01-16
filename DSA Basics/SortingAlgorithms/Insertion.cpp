#include<iostream>
#include<limits.h>//contain INT_MIN,INT_MAX functions
using namespace std;


void insertionSort(int arr[],int n){
	for(int i=1;i<n;i++)
	{
		int key=arr[i];
		int j=i-1;
		
		while(j>=0&&arr[j]>key)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=key;
		
	}
}
void printArray(int arr[],int n){
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
	
	insertionSort(arr,n);
	cout<<"Arrey after sorting is "<<endl;
	printArray(arr,n);
	}
	
}
