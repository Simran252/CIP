#include<iostream>   
#include<string>  
#define endlline "\n";
using namespace std; 
class Stack{
    public:
    int cap;
    int top1;
    int top2;
    int capacity;
    int*arr;
    Stack(int n){
        capacity=n;
        top1=-1;
        top2=n;
        arr=new int[n];


    
    }   
    bool isEmpty1(){
        if (top1==-1)
        {
            /* code */
            return 1;
        }
        else{
            return 0;
        }
        
    }
    void push1(int x){ 
       
         if(top1<top2-1){
            top1++;
            arr[top1]=x;

        }
        else{
             cout<<"overflow of stack1"<<"\n"; 
        }
         

    }
    void push2(int x){
        cout<<"ys"<<"\n";
      cout<<top2-1<<" "<<top1<<"\n";
        if(top2-1>top1){
           top2--;
           arr[top2]=x;

       }
        else{
             cout<<"overflow of stack2"<<"\n";
        }

    }
    int pop1(){
        
        
         if(top1>=0){
            int x=arr[top1];
            top1--;
            return x;


        }
     cout<<"Undeflow of stack1"<<"\n";
    }
    int pop2(){
      if(top2<capacity){
          int ans=arr[top2];
          top2--;
          return ans;

      }
      cout<<"Underflow of stack 2"<<"\n";   
    }
    int peek1(){
        if (top1==-1)
        {
            /* code */
            cout<<"stack overflow"<<"\n";
            return -1;
        }
        
        return arr[top1];


    }
    int peek2(){
        // cout<<"top2 index"<<top2<<"\n";
        return arr[top2];

    }

};
 


int main(){
     
    
    
    cout<<"\n";
    int te;
    cout<<"enter test cases"<<"\n";  
    cin>>te;
    while (te--)
    {
        /* code */
        int n;
        cout<<"enter size of array"<<"\n";
        cin>>n;   

        Stack t(n);
        // t.push1(2);
        // t.push1(3);     
        // t.push1(4);
        // t.push1(5);
        // t.push1(6);   
        // t.push1(10);    
        // cout<<"top is "<<t.peek1()<<"\n";  
        
        // int ans=t.pop1();
        // cout<<" poped  element is" <<ans<<"\n";  
        // cout<<"After removing top ele :-> top is "<<t.peek1()<<"\n";  
        //     t.pop1();
        //     t.pop1();
        //     t.pop1();
        //     t.pop1();
        //     cout<<"After removing top ele :-> top is "<<t.peek1()<<"\n";  
        //     t.pop1();
        //     t.pop1();
        //     cout<<"After removing top ele :-> top is "<<t.peek1()<<"\n"; 
           // t.push1(2);

           //stack2 
        // t.push2(3);     
        // t.push2(4);
        // t.push2(5);
        // t.push2(6);   
        // t.push2(10);    
        // cout<<"top is "<<t.peek2()<<"\n";  
        
        // int ans=t.pop2();
        // cout<<" poped  element is" <<ans<<"\n";  
        // }
        
        //push 
        t.push1(2);
        t.push1(3);     
        t.push2(4);
        t.push2(5);
        t.push2(6);   
        t.push2(10); 
        t.push2(11);   
        cout<<"top of stack 1 is "<<t.peek1()<<"\n";  
        
        int ans=t.pop1();
         cout<<"top is  stack 2 is "<<t.peek2()<<"\n";  
        
         ans=t.pop2();
        cout<<" poped  element is" <<ans<<"\n";  
        cout<<endlline;


    }
}
        
        // t.push1(-9);
        // cout<<"top is "<<t.peek1()<<"\n";
    // }
    
    