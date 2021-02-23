#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    cout<<"size is "<<s.size()<<endl;
    cout<<s.top()<<endl;
    s.pop();
    s.pop();

    cout<<s.top()<<endl;

    //stach travwrsal
    while (s.empty()==false)
    {
        /* code */
        cout<<s.top()<<" ";
        s.pop();
        
    }

}