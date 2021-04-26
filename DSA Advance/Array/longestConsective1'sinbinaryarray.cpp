#include <iostream>
#include<map>
using namespace std;

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
        int curr=0,res=0;
         for (int i = 0; i < n; i++)
            {
                if (arr[i]==1)
                {
                    curr++;
                    res=max(res,curr);

                }
                else{
                    curr=0;

                }
            }
	}
	
}