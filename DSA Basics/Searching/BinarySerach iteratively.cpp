#include<iostream>
using namespace std;

//succesfull search
//Time complexity=O(logn)
//un-succesfull search
//Time complexity=theta(logn)

//space complecity=O(logn)

int binarySearch(int arr[],int n,int start,int end,int e){

			while(start<=end){
			int mid=(start+end)/2;
			if(e==arr[mid])
			{
				
				return mid;
			}
			else if(e<arr[mid]){
				end=mid-1;
				
			}
			else if(e>arr[mid]){
				start=mid+1;
				
			}
			
			
		}
		return -1;
	
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
	cout<<binarySearch(arr,n,0,n-1,e);

}
