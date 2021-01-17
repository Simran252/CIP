#include<iostream>
#include<algorithm>
using namespace std;
//effective approach ->if both arrays are already sorted
//time complexity=theta(n)
//space complexity=theta(n)

//Here assume that first mid elements are sorted and next mid elemets are also sorted

void printArray(int arr[],int n){
	cout<<"After sorting array is "<<"\n";
	
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
		
	}
	cout<<"\n";
}

void mergeSort(int arr[],int low,int mid,int high){
	//creting 2 auxilary arrays
	int arr1[mid+1];
	int arr2[high-mid];
	int c;
	//copy element of arr to auxilay arrays arr1 and arr2
	for(c=0;c<(mid+1);c++){
		arr1[c]=arr[low+c];
		
	}
	for(int d=0;d<(high-mid);d++){
		arr2[d]=arr[c];
		c++;
	}
	//now merge array into original arr
	int i=0,j=0;
	int k=0;
	while(i<(mid+1)&&j<(high-mid))
	{
		if(arr1[i]<=arr2[j])
		{
			arr[k]=arr1[i];
			i++;
			k++;
			
		}
		else
		{
			arr[k]=arr2[j];
			
			j++;
			k++;
			
		}
	}
	//remianong ele
	for(int c=i;c<mid+1;c++){
		arr[k]=arr1[c];
		k++;
		
	}
	for(int c=j;c<high-mid;c++){
		arr[k]=arr2[c];
		k++;
		
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
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Enter low,mid,high"<<endl;
	int low,mid,high;
	cin>>low>>mid>>high;
	
	
	mergeSort(arr,low,mid,high);
	printArray(arr,high+1);
	
	}
	//i/p: 10 15 20 40 8 11 55
//			0 3 6
//i/p: 1 3 5 7 10 25 2 4 5 6 
//	   0 5 9
	
}
