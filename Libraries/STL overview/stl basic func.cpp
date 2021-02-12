#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
template<typename T>
	T myMax(T a,T b){
		return (a>b)?a:b;
		
	}
	//function template
template<typename V, int limit>
V arrMax(V arr[],V n){
	
	V max=arr[0];
	if(n>limit){
		cout<<"Limit excedded"<<endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
	}
	return max;
	
}
//class template
template<typename P>
class Pair{
	public:
	P a,b;
	Pair(P i,P j){
		a=i;
		b=j;
		
	}
	P getFirst(){
		return a;
	}
	P getSecond(){
		return b;
	}
};
void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main(){
	
	//Arrays
	
	int arr[]={10,4,2,65};
	sort(arr,arr+4);
	printArray(arr,4);
	
	if(binary_search(arr,arr+4,2)){
		cout<<"True"<<"\n";
	}else{
		cout<<"False"<<"\n";
	}
	
	//template
	cout<<"max is "<<myMax<int>(3,0)<<"\n";
	cout<<"max is "<<myMax<char>('c','v')<<"\n";
	
	//function template
	int arr1[]={3,1,2,4,5};
	cout<<"Max in array is "<<arrMax<int,100>(arr1,5)<<"\n";
	float arr2[]={1.0,30.6,21.7};
	cout<<"Max in array is "<<arrMax<float,1>(arr2,3)<<"\n";
	
	//class template
	Pair<int> p1(4,2),p2(60,4);
	
	cout<<p1.getFirst()<<" "<<p1.getSecond()<<"\n";

 
}
