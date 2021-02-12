#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;

void printArray(char arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}
void sortAnArrayAccToAnotherArray(int arr1[],int n,char arr2[]){
	//array of pairs
	pair<int,char> pairOfArray[n];
	for(int i=0;i<n;i++){
		pairOfArray[i]={arr1[i],arr2[i]};
		
	}
	sort(pairOfArray,pairOfArray+n);
	
	for(int i=0;i<n;i++){
		arr2[i]=pairOfArray[i].second;
	}
	
}


int main(){
	
	int n;
	
	cout<<"Enter size of arrays "<<endl;
	cin>>n;
	cout<<"enter arr1"<<"\n";
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	cout<<"enter arr2"<<"\n";
	char arr2[n];
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	sortAnArrayAccToAnotherArray(arr1,n,arr2);
	cout<<"Array after sorting is"<<endl;
	printArray(arr2,n);
	
}	
