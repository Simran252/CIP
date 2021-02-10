#include<iostream>
#include<limits.h>
using namespace std;

class Heap{
	public:
	int*arr;
	int capacity;
	int size;
	Heap(int c){
		capacity=c;
		size=0;
		arr=new int[c];
		for(int i=0;i<c;i++){
			arr[i]=-1;
						
		}
	}
	int left(int i){
		return (2*i)+1;
		
	}
	int right(int i){
		return (2*i)+2;
	}
	int parent(int i){
		return (i-1)/2;
		
	}
	void printMinHeap(){
		cout<<"Min heap is "<<endl;
		for(int i=0;i<size;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}
	
	
void swap(int*a,int*b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
	
}

void buildHeap(){
	int j=size-1;
	
	for(int i=(j-1)/2;i>=0;i--){
		minHeapify(i);
	}
}
void deleteOperation(int k){
	if(size==0){
		cout<<"can't delete,heap is empty"<<"\n";
		return;
	}
	//decreasekey
	arr[k]=INT_MIN;
	int i=k;
	while(i!=0&&arr[parent(i)]>arr[i]){
		swap(&arr[parent(i)],&arr[i]);
		i=parent(i);
		
	}
	//Extract 
	minExtract();
	
	
}
void decreaseKey(int i,int x){
	arr[i]=x;
	int j=size-1;
	while(j!=0){
		if(arr[parent(j)]>arr[j]){
			//swap
			swap(&arr[j],&arr[parent(j)]);
			j=parent(j);
		
		}
		else{
			j--;
			
			
		}
	}
	
	
}

int minExtract(){
	if(size==0){
		return INT_MAX;
	}
	if(size==1){
		size--;
		return arr[0];
		
	}
	swap(&arr[0],&arr[size]-1);
	size--;
	
	minHeapify(0);
	return arr[size];
	
}

void minHeapify(int i){
	int leftc=left(i);
	int rightc=right(i);
	int min=i;

		if(leftc<size&&arr[i]>arr[leftc]){
			
			min=leftc;
			
		}
		 if(rightc<size&&arr[rightc]<arr[min]){
			min=rightc;
			
			
		}
		if(min!=i){
			swap(&arr[i],&arr[min]);
			minHeapify(min);
		}
		
		
}
	void insert(int x){
	if(capacity==size){
		cout<<"Heap is full, can't insert more items"<<endl;
		return;
	}
	
		size++;
		arr[size-1]=x;
		for(int i=size-1;i!=0&&arr[parent(i)]>arr[i];){
			
			swap(&arr[i],&arr[parent(i)]);
			i=parent(i);
		
			
		}
}
	
};



int main(){
	Heap h(10);
	h.insert(40);
	h.insert(20);
	h.insert(30);
	h.insert(35);
	h.insert(25);
	h.insert(80);
	h.insert(32);
	h.insert(100);
	h.insert(70);
	h.insert(60);


	h.printMinHeap();
	
	h.minHeapify(0);
	h.printMinHeap();
	cout<<"\n";
	
	cout<<"removed item from heap is "<<h.minExtract()<<endl;
	h.printMinHeap();
	
	int pos,x;
	cout<<"Enter position"<<endl;
	cin>>pos;
	cout<<"Enter x"<<endl;
	cin>>x;
	
	h.decreaseKey(pos,x);
	cout<<"After replacing the key the heap is "<<endl;
	h.printMinHeap();
	
	h.deleteOperation(3);
	cout<<"After deleting the heap is "<<endl;
	h.printMinHeap();
	
	h.buildHeap();
	cout<<"After buildheap  heap is "<<endl;
	h.printMinHeap();
	
}
