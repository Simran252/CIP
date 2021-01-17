#include<iostream>
#include<algorithm>
using namespace std;
//Naive approach
//time complexity=O(m+n*log(m+n))
//space complexity=theta(m+n)


void printArray(int arr[],int n){
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}


void mergeSort(int arr1[],int n,int arr2[],int m){
	int arrextra[m+n];
	int k=0;
	for(int i=0;i<n;i++){
		arrextra[k]=arr1[i];
		k++;
	}
	for(int j=0;j<m;j++){
		arrextra[k]=arr2[j];
		k++;
		
	}
	
	//sorting the array
	sort(arrextra,arrextra+m+n);
	cout<<"Array after sorting is "<<endl;
	printArray(arrextra,m+n);
	
	
	
}
int main(){
	int T;
	cout<<"Enter test cases"<<endl;
	cin>>T;
	while(T--){
		int n;
	cout<<"Enter size of 1st array"<<endl;
	cin>>n;
	cout<<"Enter 1st array ele"<<endl;
	int arr1[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	//2nd array
	int m;
	cout<<"Enter size of 2nd array"<<endl;
	cin>>m;
	cout<<"Enter 2nd array ele"<<endl;
	int arr2[m];
	for(int i=0;i<m;i++){
		cin>>arr2[i];
	}
	
	mergeSort(arr1,n,arr2,m);
	}
	
}
