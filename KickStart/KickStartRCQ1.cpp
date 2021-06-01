#include <iostream>
#include<algorithm>
using namespace std;
int sol(string s,int n,int k){
    if (n==1)
    {
        /* code */
        return (k-n-1);

    }
    else if(n==k){
         if(n%2==0){
             return n/2;

         }
         else{
             return n+(n/2)+1;

         }

    }
    else{
        if(n>k){
            return (k+(k-1));

            
        }
        else{
            return n;

        }
    }

   

}
int main() {

	int T;
	cin>>T;
	for(int t=1;t<=T;t++){
	    int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ansi=sol(s,n,k);

    	cout<<"Case #"<<t<<": "<<ansi<<"\n";
	
}
}