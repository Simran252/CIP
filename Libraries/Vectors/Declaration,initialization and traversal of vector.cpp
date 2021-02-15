#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


void printVector(vector <int>&v){
	
	for(vector<int> ::iterator i=v.begin();i!=v.end();i++){
		cout<<(*i)<<" ";
	}
	cout<<endl;
}


int main(){
	vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	for(int i=0;i<v.size();i++){
		cout<<v[i]<<" ";
	}
//	cout<<v.at(9)<<endl; //givs error
	//way 2
//	vector<int > vec{10,50,80};
//	for(int x:vec){
//		cout<<x<<" ";
//	}
	cout<<"\n";
	
	int a[]={1,2,3};
	int n=sizeof(a)/sizeof(a[0]);
	vector<int> vi(a,a+n);
	printVector(vi);
	for(vector<int> ::iterator i=vi.begin();i!=vi.end();i++){
		cout<<*i<<" ";
	
	}
	cout<<"\n";
	
	//functions on vectors
	int arr4[]={1,2,3,4,5};
	int size=sizeof(arr4)/sizeof(arr4[0]);
	
	vector<int> vFun(arr4,arr4+size);
	printVector(vFun);
	
	vFun.pop_back();
	printVector(vFun);
	
	cout<<"Front is "<<vFun.front()<<"\n";
	
	cout<<"Back is "<<vFun.back()<<"\n";
	//Inserting in diff ways
	
	vFun.insert(vFun.begin(),100);
	
	printVector(vFun);
	
	vFun.insert(vFun.begin()+2,40);
	printVector(vFun);
	
	vFun.insert(vFun.begin()+4,2,300);
	printVector(vFun);
	
	//Insert elem from another container
	vector<int> v2;
	v2.insert(v2.begin(),vFun.begin()+1,vFun.end()-2);
	printVector(v2);
	
	//erase()
	v2.erase(v2.begin());
	printVector(v2);
	
	vFun.erase(vFun.begin()+1,vFun.end());
	printVector(vFun);
	
	//clear
	v2.clear();
	
	printVector(v2);
	cout<<"size of vector v2 is "<<v2.size()<<endl;
	if(v2.empty()){
		cout<< "v2 is empty"<<"\n";
	}
	else{
		cout<< "v2 is not empty"<<"\n";
	}
	//resize()
	vector<int> v3;
	v3.push_back(6);
	v3.push_back(7);
	v3.push_back(8);
	v3.push_back(9);
	v3.resize(2);
	printVector(v3);
	
	v3.resize(5);
	printVector(v3);
	
	v3.resize(8,100);
	printVector(v3);
}	
