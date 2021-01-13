#include<iostream>
using namespace std;

//Time complexity=O(logn)
//space complecity=O(logn)
//so better to use binary search interative algo


int binarySearchRecursiveHelper(int arr[],int n,int start,int end,int e){
	
	
	//base case
	if(end<start){
		return -1;
	}
	int mid=(start+end)/2;
	if(arr[mid]==e){
		return mid;
	}
	if(e<arr[mid]){
		binarySearchRecursiveHelper(arr,n,0,mid-1,e);//left half
	}
	else if(e>arr[mid]){
		binarySearchRecursiveHelper(arr,n,mid+1,n-1,e);//right half
	}
}

int binarySearchRecursive(int arr[],int n,int e){
	//Recursive binary search
	
	binarySearchRecursiveHelper(arr, n,0,n-1,e);
	
}

int main(){
	//binary serach
	int n;
	cout<<"Enter array size"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter array"<<"\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
		
	}
	cout<<"enter element to search"<<endl;
	int e;
	cin>>e;
	cout<<"element is preent at ";
	//Recurvive approach
	cout<<"element is "<<binarySearchRecursive(arr,n,e);
	
	
}

