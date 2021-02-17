#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printVector(vector <int>&v){
	
	for(vector<int> ::iterator i=v.begin();i!=v.end();i++){
		cout<<(*i)<<" ";
	}
	cout<<endl;
}
void sortstudentByMarks(int roll[],int marks[],int n){
	
	vector<pair<int,int>> pairVec;
	for(int i=0;i<n;i++){
		pairVec.push_back({marks[i],roll[i]});
		
	}
	sort(pairVec.begin(),pairVec.end(),greater<pair<int,int>>());
	for(int i=0;i<n;i++){
		cout<<pairVec[i].second<<" "<<pairVec[i].first<<endl;
	}
}

int main() {
	
	int roll[]={101,108,103,105};
	int marks[]={70,80,40,90};
	int size=sizeof(roll)/sizeof(roll[0]);
	sortstudentByMarks(roll,marks,size);
	
}
