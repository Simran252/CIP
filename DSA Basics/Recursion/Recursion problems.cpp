#include<iostream>
#include<string.h>
using namespace std;
bool pallindromeHelper(string s,int a,int b){
	//base case
	if(a==b||s.length()==0){
		return 1;
	}	
		if(s[a]!=s[b]) {
		return 0;
	}
	else if(s[a]==s[b]){
		pallindromeHelper(s,a+1,b-1);
		
	}
	
}
bool pallindrome(string s){
	
	int ans=pallindromeHelper(s,0,s.length()-1);
	return ans;
	
}

int sum1ToN(int n){
	//base case
	if(n==0){
		return 0;
	}
	int a=sum1ToN(n-1);
	return n+a;
	
	
}
int nthFibonnaci(int n){
	//base case
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	
	int a=nthFibonnaci(n-1);
	int b=nthFibonnaci(n-2);
	return a+b;
	
	
}

int factorial(int n){
	//base case
	if(n==0){
		return 1;
	}
	int ans=factorial(n-1);
	return n*ans;
}



void tailRecursive(int n,int k){
	//base case
	if(n==0){
		return;
	}
	cout<<k<<" ";
	tailRecursive(n-1,k+1);
}
void printNo1toNUsingRec(int n){
	
	tailRecursive(n,1);
//	if(n==0){
//		return;
//	}
//	//rec call
//
//	
//	printNo1toNUsingRec(n-1);
//	cout<<n<<" ";
		//time complexity=theta(n+1)=theta(n)
//	space com=O(n)
	
}
void printNoNto1UsingRec(int n){
	
	//base case
	if(n==0){
	
		return;
	}
	cout<<n<<" ";
	printNoNto1UsingRec(n-1);
	
	//time complexity=theta(n+1)=theta(n)
//	space com=theta(n)

	
}
int main(){
	cout<<"enter n"<<endl;
	int n;
	cin>>n;
	printNoNto1UsingRec(n);
	cout<<endl;
	printNo1toNUsingRec(n);
	cout<<endl;
	//fasttorial of n0
	cout<<"fact is : "<<factorial(n)<<endl;
	//nth fibonacci no
	cout<<"nth fibonnaci is :"<<nthFibonnaci(n)<<endl;
	
	//sum of 1st n natural no
	cout<<"sum 1toN is :"<<sum1ToN(n)<<endl;
	
	//pallindrome or not
	cout<<"enter string"<<endl;
	string s;
	cin>>s;
	
	cout<<"string is "<<pallindrome(s);
	
	
	
	
	
	
}
