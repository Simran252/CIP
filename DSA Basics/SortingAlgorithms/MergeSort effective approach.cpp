#include<iostream>
#include<algorithm>
using namespace std;
//effective approach ->if both arrays are already sorted
//time complexity=theta(m+n)
//space complexity=O(1)

void mergeSort(int arr1[],int n,int arr2[],int m){
	int i=0,j=0;
	
	while(i<n&&j<m)
	{
			if(arr1[i]<=arr2[j])
			{
				cout<<arr1[i]<<" ";
				i++;
			}
			else{
				cout<<arr2[j]<<" ";
				j++;
				
			}
			
	}	
	//print remaining elements
	for(int p1=i;p1<n;p1++){
		cout<<arr1[p1]<<" ";
	}
	
	for(int p2=j;p2<m;p2++){
		cout<<arr2[p2]<<" ";
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
