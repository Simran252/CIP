#include<iostream>
#include<limits.h>//contain INT_MIN,INT_MAX functions
using namespace std;
//i/p: 10 5 8 20 2 18
//o/p: 2 5 8 10 18 20
//time complexity=theta(n^2)

void swap(int*a,int*b){
	
	int c=*a;
	*a=*b;
	*b=c;
	return;
}
void selectionSort(int arr[],int n){
	
	for(int i=0;i<n;i++)
	{
		int min=INT_MAX;
		
		int minindex;
		
		for(int j=i;j<n;j++)
		{
			if(min>arr[j])
			{
				
				min=arr[j];
				minindex=j;
			}
		}
		
		swap(&arr[minindex],&arr[i]);		
	}
	


}
void print(int arr[],int n){
	for(int p=0;p<n;p++)
	{
		cout<<arr[p]<<" ";
		
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
	
	selectionSort(arr,n);
	cout<<"Array after sorting is"<<endl;
	print(arr,n);
	}
	
}
