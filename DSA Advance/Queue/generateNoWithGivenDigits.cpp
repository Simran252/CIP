#include<iostream>
#include<queue>
#include<stack>
#include<vector>
using namespace std;
void generateNoWitHGivenDigit(int n){
    // int count=0;
    queue<int> q;
    q.push(5);
    q.push(6); 
    // cout<<5<<" "<<6<<" ";

    
    for (int i = 0; i<n; i++)
    {
        int t=q.front();
       cout<<q.front()<<" ";
       q.pop();
       q.push(t*10+5);
       q.push(t*10+6);
    } 

    

}

int main(){
    int n;
    cin>>n;
    generateNoWitHGivenDigit(n);
}