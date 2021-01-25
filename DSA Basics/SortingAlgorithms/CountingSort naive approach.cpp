#include<iostream>
using namespace std;


void printArray(int arr[],int n){
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}

void countingSortNaiveApp(int arr[],int n,int k){

	int count[k];
	for(int i=0;i<k;i++){
		count[i]=0;
	}

	for(int j=0;j<n;j++){
			
		count[arr[j]]=count[arr[j]]+1;
			
	}	
	int index=0;
	for(int i=0;i<k;i++)
	{
		for(int j=0;j<count[i];j++)
		{
			arr[index]=i;
			index++;
			
			
			
			
		}
			
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
	
	countingSortNaiveApp(arr,n,k);
	printArray(arr,n);
	
}
}
