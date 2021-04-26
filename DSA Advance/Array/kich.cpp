#include <iostream>
#include<algorithm>
#include<map>
using namespace std;

int main() {
	//code
	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
	    int n,d;
	    cin>>n>>d;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
        //solu
        int c=0, tempd=d,maxh=0;
        for(int i=0;i<n;i++)
        {
            c=0;
            for (int j = i; j<n; j++)
            {
                /* code */
                if (tempd>=arr[j])
                {
                    /* code */
                    tempd=tempd-arr[j];
                    c=c+1;


                }
                

            }
            cout<<"c is"<<c<<"\n";
            maxh=max(maxh,c);
            tempd=d;

            
            
        }
        cout<<"ans us "<<maxh<<"\n";
      
        
	}
	
}