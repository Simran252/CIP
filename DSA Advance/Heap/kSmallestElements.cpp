#include<iostream>
#include<queue>
using namespace std;
class compareFun{
    public:
    bool operator()(pair<int,int> &p1,pair<int,int> &p2){
        //mih hap
        if (p1.second>p2.second)
        {
            return true;
        }
        return false;
    }
    
};

void kSmallestElements(int*arr,int n,int x,int count){
    //min heap
    priority_queue<pair<int,int>,vector<pair<int,int>>,compareFun> pq;
    for (int i = 0; i<n; i++)
    {
        /* code */
        pair<int,int> pw=make_pair(arr[i],abs(x-arr[i]));
        pq.push(pw);
    }   
    for (int i = 0; i <count; i++)
    {
        if (pq.empty()==false)
        {
            cout<<pq.top().first<<" ";
            
            pq.pop();
            
        }
    }

}
int main(){
    int n;
    int x,k;
    cin>>n;
    cout<<"enter x and k "<<endl;
    cin>>x>>k;
    cout<<"enter array size"<<"\n";
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    kSmallestElements(arr,n,x,k);
   


}