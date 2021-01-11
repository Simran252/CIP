#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
int stepsToMoveDiskFromAToCHelper(n,A,B,C){
	
	if(n==1){
		return 1;
	}
	
	int a=stepsToMoveDiskFromAToCHelper(n-1,A,C,B);
	int b=stepsToMoveDiskFromAToCHelper(n-1,B,A,C);
	return a+b+1;
	
	
	
	
	
}
int stepsToMoveDiskFromAToC(int n){
	char A,B,C;
	
	stepsToMoveDiskFromAToCHelper(n,A,B,C);
	
}

int main(){
	int n;
	cout<<"enter no of disks"<<endl;
	cin>>n;
	stepsToMoveDiskFromAToC(n);
	
}
