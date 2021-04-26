#include <iostream>
#include<map>
using namespace std;
int maximumLenghtEvenOddOccurences(int arr[],int n){

            int ans=1,res=1;

            for(int i=0;i<n-1;i++){
            if (arr[i]%2==0&&arr[i+1]%2!=0||arr[i]%2!=0&&arr[i+1]%2==0)
            {
                ans++;
                 res=max(ans,res);




            }
            else if(arr[i]%2==0&&arr[i+1]%2==0||arr[i]%2!=0&&arr[i+1]%2!=0)
            {
               
            ans=1;


            }
            
            
            
        }
        return res;
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

        cout<<"linear time sol"<<"\n";
        int res=1,ans=1;
      int maxi= maximumLenghtEvenOddOccurences(arr,n);
      cout<<"result is "<<maxi<<"\n";
        
	}
	
}