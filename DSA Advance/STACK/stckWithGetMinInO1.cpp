#include<iostream>
#include<algorithm>   
#include<stack>
using namespace std;
class stck{
    public:
    stack<int> myStack;
    stack<int> auxStack;

    void pushS(int data){
        if (myStack.empty()==true)
        {
            /* code */
            myStack.push(data);
            auxStack.push(data);
            return;

        }
        myStack.push(data);
        if (myStack.top()<=auxStack.top())
        {
            /* code */
            auxStack.push(data);
        }

         

    }
    void popS(){
        if (myStack.top()==auxStack.top())
        {
            /* code */
            auxStack.pop();

        }
        myStack.pop();
        

    }
    int getMin(){
        return auxStack.top();

    }
    int getTop(){
        return myStack.top();

    }


};


int main(){ 
    stck st;
    st.pushS(5);
    st.pushS(10);
    st.pushS(15);
    st.pushS(20);
    st.pushS(2);
    st.pushS(6); 
    cout<<"min is "<<st.getMin()<<"\n";
    st.popS();
    st.popS();
    cout<<"Min after pop of ele is "<<st.getMin()<<endl;

    
   
    
}