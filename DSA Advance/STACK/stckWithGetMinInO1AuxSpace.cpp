#include<iostream>
#include<algorithm>   
#include<stack>
using namespace std;
class stck{
    public:
    stack<int> st;
    int min;
    int getMin(){
        return min;

    }
    int getTop(){
      

    }
    void push(int data){
        if (st.empty()==true)
        {
            /* code */
            st.push(data);
            min=st.top();
            return;
        }
        else if(st.top()<data){
            st.push(data);



        }
        else{
            st.push(min-data);

            min=data; 
            
        }

    }
    void pop(){
        

    }



};


int main(){ 
    stck s;

   
   
    
}