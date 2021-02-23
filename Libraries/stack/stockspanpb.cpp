#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;
void printVec(vector<int>& vec){
    for (auto i:vec)
    {
        cout<<i<<" ";
    }
    cout<<"\n";

}
vector <int> efficentStockSpan(int price[], int n){
    stack<int > s;
    vector<int > v;
    int span;
    s.push(0);
    for (int i = 1; i < n; i++)
    {
        while (s.empty()==false&&price[i]>price[s.top()])
        {
            /* code */
            s.pop();




        }
        if(s.empty()==true){
            span=i+1;
            v.push_back(span);


        }else{
            span=i-s.top();
            v.push_back(span);

        }
        s.push(i);

        
    }
    return v;
  

}

vector <int> stockSpan(int price[], int n)
{
   // Your code here
   //naive solution
   vector<int> v;
   int c=1;
   v.push_back(c);

   for (int i = 1; i < n; i++)
   {
       
       c=1;
       /* code */
       if(price[i]<price[i-1]){
           v.push_back(c);
       }else
       {
        for (int j =i; j>0; j--)
       {
           /* code */
          if(price[i]>price[j-1]){
                c++;
                

          }else{
              break;
          }

       }

       v.push_back(c);


       }
       
       
   }
   return v;

   
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // vector<int> v= stockSpan(arr,n);
    // cout<<"using simple ans is "<<endl;
    // printVec(v);
    vector<int> v2=efficentStockSpan(arr,n);
    cout<<"using effective ans is "<<endl;

    printVec(v2);


}