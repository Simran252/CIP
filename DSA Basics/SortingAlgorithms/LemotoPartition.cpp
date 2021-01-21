#include<iostream>
using namespace std;
//time=0(N)
//space=0(1)
void swap(int*a,int*b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
	
}

void printArray(int arr[],int n){
	cout<<"array after partition around a given pivot is"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}
int lemutoPartition(int arr[],int n){
	int i=-1,j=0;
	int l=0,h=n-1;
	int pivot=arr[h];
	
	while(j<h){
		if(arr[j]<pivot)
		{
			i++;
			swap(&arr[i],&arr[j]);
			
		}
		j++;
		
	}
	swap(&arr[i+1],&arr[h]);	
	return i+1;
	
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
	cout<<"index of pivot is "<<lemutoPartition(arr,n)<<"\n";
	printArray(arr,n);
	
}
}
