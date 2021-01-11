#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;
void stepsToMoveDiskFromAToCHelper(int n,char A,char B,char C){
	
	if(n==1){
		cout<<"Move 1 from "<<A <<"to "<<C<<endl;
		return;
	}
	
	
	stepsToMoveDiskFromAToCHelper(n-1,A,C,B);
	cout<<"Move "<<n <<"form "<<A <<"to "<<C<<endl;
	stepsToMoveDiskFromAToCHelper(n-1,B,A,C);
	
	
}
void stepsToMoveDiskFromAToC(int n){
	char A='A',B='B',C='C';
	
	stepsToMoveDiskFromAToCHelper(n,A,B,C);
	
}

int main(){
	int n;
	cout<<"enter no of disks"<<endl;
	cin>>n;
	stepsToMoveDiskFromAToC(n);
	
}
