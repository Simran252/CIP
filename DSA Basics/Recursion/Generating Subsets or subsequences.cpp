#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

void generatingSubsetsHelper(string s,string current,int i){
	//base case
	if(i==s.length()){
		cout<<current<<endl;
		return;
		
	}
	//calls
	generatingSubsetsHelper(s,current,i+1);
	generatingSubsetsHelper(s,current+s[i],i+1);
	
}

void generatingSubsets(string s){

	generatingSubsetsHelper(s,"",0);
	
}

int main(){
	cout<<"enter string"<<endl;
	string s;
	cin>>s;
	generatingSubsets(s);
}
