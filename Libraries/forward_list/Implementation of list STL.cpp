#include <iostream>
#include<list>
using namespace std;

void printList(list<int>&l){
    for(auto x:l){
	    cout<<x<<" ";
	}
	cout<<"\n";
}

int main() {
	list<int> l1;
	l1.push_back(10);
	l1.push_back(20);
	l1.push_front(30);
	
	printList(l1);
	l1.pop_front();
	l1.pop_back();
	printList(l1);
	
	//insert
	
	list<int> l2={1,2,3,4};
	auto it=l2.begin();
	*it=19;
	it++;
	it=l2.insert(it,56);
	printList(l2);
	
	it=l2.insert(it,5,2);
	printList(l2);
	
	//erase
	list<int> l3={10,20,30,40,60,40};
	list<int>::iterator it1=l3.begin();
	
	it1=l3.erase(it1);
	cout<<"iterator is "<<(*it1)<<"\n";
	printList(l3);
	
	//remove
	l3.remove(40);
	printList(l3);
	
	//merge
	list<int> l4={10,20,30};
	list<int> l5={5,15,25};
	l4.merge(l5);
	printList(l4);
	printList(l5);
	
	//other funtions
	list<int>k{10,15,16,18,18,18,10,10};
	k.unique();
	printList(k);
	
	k.sort();
	printList(k);
	
	k.reverse();
	printList(k);
	
	
}
