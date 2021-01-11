#include<iostream>
#include<algorithm>
using namespace std;
int ropeCuttingProblem(int n,int a,int b,int c){
	//recursive function
	
	//base case
	if(n==0){
		return 0;
	}
	if(n<1){
		return -1;
	}
	int p=ropeCuttingProblem(n-a,a,b,c);
	int q=ropeCuttingProblem(n-b,a,b,c);
	int r=ropeCuttingProblem(n-c,a,b,c);
	

	int res= max(p,max(q,r));
	if(res==-1){
		return -1;
	}
	else{
		return res+1;
	}
	
	
	
	//time complexity=O(n)
	
	
	
	
}
int main(){
	int n,a,b,c;
	cout<<"Enter n,a,b,c"<<endl;
	cin>>n>>a>>b>>c;
	cout<<"max pieces are "<<ropeCuttingProblem(n,a,b,c);
	
}

