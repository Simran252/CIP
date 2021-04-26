#include <iostream>
#include<map>
using namespace std;
int linearSolu(int arr[],int n){
    int larr[n],rarr[n];
    int lmax=arr[0],rmax=arr[0];
    for (int i = 1; i < n-1; i++)
    {
        //leftmax
        if (arr[i]<lmax)
        {
            larr[i]=lmax;
            


        }
        

    }
     for (int i = 1; i < n-1; i++)
    {
        
    }
   

    
    
    
    
}
int main() {
	//code
	int T;
	cin>>T;
	while(T--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    //solution
      
        cout<<"linear time sol"<<"\n";
        cout<<"max diff is"<<linearSolu(arr,n)<<"\n";
	}
	
}