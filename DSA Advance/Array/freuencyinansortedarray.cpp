#include <iostream>
#include<map>
using namespace std;
void usingMap(int arr[],int n){ 
    map<int,int> m;
        for (int i = 0; i < n; i++)
        {
            m[arr[i]]++;


        }
        for(auto i=m.begin();i!=m.end();i++){
            cout<<(*i).first<<" "<<(*i).second<<"\n";
        }
}
void linearSolu(int arr[],int n){
    int count=1;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]==arr[i+1]){
            count++;

        }
        else
        {
            cout<<arr[i]<<" "<<count<<"\n";
            count=1;

        }
        
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
        cout<<"using map"<<"\n";

        usingMap(arr,n);
        cout<<"linear time sol"<<"\n";
        linearSolu(arr,n);


        
        

	    
	    
	}
	
}