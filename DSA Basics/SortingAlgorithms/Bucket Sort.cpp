#include<iostream>
#include<limits.h>
#include<vector>
#include<algorithm>
using namespace std;
void printArray(int arr[],int n){
	cout<<"After sorting array is "<<endl;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}

void bucketSort(int arr[],int n,int k){
	//find range of arr i.e min and max .min is 0 
	int max=INT_MIN;
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
			
		}
	}
	max+=1;
	//fill the buckets
	vector <int> bkt[k];
	for(int i=0;i<n;i++){
		int bindex=(k*arr[i])/max;
		bkt[bindex].push_back(arr[i]);
		
	}
	//sort the buckets
	for(int i=0;i<k;i++){
		sort(bkt[i].begin(),bkt[i].end());
		
	}
	//merge the bucktes into original arr[]
	int index=0;
	for(int i=0;i<k;i++){
		for(int j=0;j<(bkt[i].size());j++){
			arr[index++]=bkt[i][j];
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
	int k;
	cout<<"Enter bucket size i.e k"<<"\n";
	cin>>k;
	bucketSort(arr,n,k);
	printArray(arr,n);
	
}
}
