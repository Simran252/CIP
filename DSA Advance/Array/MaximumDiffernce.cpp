#include <iostream>
#include<map>
using namespace std;
int linearSolu(int arr[],int n){
    int mini=arr[0],maxDiff=arr[1]-arr[0],diff;
    for (int i = 1; i<n; i++)
    {
        
        if (arr[i]<mini)
        {

            mini=arr[i];
        }

        
        
        diff=arr[i]-mini;
        if (diff>maxDiff)
        {
            maxDiff=diff;
        }
    }
    return maxDiff;

    
    
    
    
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