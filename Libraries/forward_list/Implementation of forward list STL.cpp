#include <iostream>
#include<forward_list>
#include<algrithm>
using namespace std;
void printForwardList(forward_list<int>&flist){
    for(auto i:flist){
	    cout<<i<<" ";
	}
	cout<<"\n";
}
void printForwardListUsingIterator(forward_list<int>&flist){
    for(auto it=flist.begin();it!=flist.end();it++){
	    cout<<(*it)<<" ";
	}
	cout<<"\n";
}
int main() {
	
	forward_list<int> f{1,2,3,4};
	//push()
	f.push_front(5);
	f.push_front(6);
	printForwardList(f);
	f.pop_front();
	printForwardList(f);
	
	//Important functions on forward_list
	
	forward_list<int > f2;
	f2.assign({0,1,2,0,3,0});
	printForwardList(f2);
	
	f2.remove(0);
	printForwardList(f2);
	
	//varients of assign func
	forward_list<int> f3;
	f3.assign(f2.begin(),f2.end());
	printForwardList(f2);
	
	forward_list<int> f4;
	f4.assign(4,7);
	
	printForwardListUsingIterator(f4);
	
	//insert_after
	forward_list<int> f5={1,2,3,4};
	auto iti=f5.insert_after(f5.begin(),10);
// 	cout<<(iti)<endl;
	printForwardList(f5);
	
	iti=f5.insert_after(iti,{6,7,8});
	printForwardList(f5);
	
	//emplace_after()
	iti=f5.emplace_after(iti,90);
	printForwardListUsingIterator(f5);
	
	//erase_after()
	iti=f4.erase_after(iti);
	printForwardListUsingIterator(f5);
	cout<<"iterator is "<<(*iti)<<endl;
	
	forward_list<int> f6={10,9,4};
	f6.clear();
	printForwardListUsingIterator(f6);
	
	if(f6.empty()){
	    cout<<"f6 is empty"<<"\n";
	   
	}
	else{
	    cout<<"f6 is not empty"<<"\n";
	}
	//reverse
	f5.reverse();
	cout<<"revrse of LL is";
	printForwardList(f5);
	
	//merge
    forward_list<int> f7={5,10};
    forward_list<int> f8={1,5,11};
    f8.merge(f7);
    printForwardList(f7);
    printForwardList(f8);
    //sort
    f5.sort();
    printForwardList(f5);
	return 0;
}
