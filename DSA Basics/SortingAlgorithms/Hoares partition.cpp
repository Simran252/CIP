#include<iostream>
using namespace std;

//partion around a given pivot using Hares partion method
void printArray(int arr[],int n){
	cout<<"array after partition around a given pivot is"<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
}

void swap(int*a,int*b){
	int c=*a;
	*a=*b;
	*b=c;
}
int hoaresPartiton(int arr[],int n,int low,int high){
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
	cout<<"index is "<<hoaresPartiton(arr,n,0,n-1);
	cout<<"\n";
	printArray(arr,n);
	
}
}
