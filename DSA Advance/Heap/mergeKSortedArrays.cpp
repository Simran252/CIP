#include<iostream>
#include<vector>
#include<queue>
using namespace std; 
void printVector(vector<int> &v){
    for(auto it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
}
class Triplet{
    public:
    int val,apos,vpos;
    Triplet(int val,int apos,int vpos){
        this->val=val;
        this->apos=apos;
        this->vpos=vpos;
 
    }
};
class myComp{
    public:
    bool operator()(Triplet t1,Triplet t2){
        if(t1.val>t2.val)
        {
            /* code */
            return true;
        }
        
        return false;

    }

};
void utilMergeArrays(vector<vector<int>> arr,vector<int> &res){
    //min priority queue
    priority_queue<Triplet,vector<Triplet>,myComp> pq;
    int n=arr.size(); 
    for (int i = 0; i < n; i++)
    {
        /* code */
        Triplet t(arr[i][0],i,0);
        pq.push(t);

        
    }
    while (pq.empty()==false)
    {
        /* code */
        Triplet curr=pq.top();
        pq.pop();
        cout<<"curr is "<<curr.val<<"\n";
        res.push_back(curr.val);
        int arrpos=curr.apos;
        int valpos=curr.vpos;
        if(valpos<arr[arrpos].size()){
            Triplet t2(arr[arrpos][valpos],arrpos,valpos);
            pq.push(t2);

        }
    }
    

}
vector<int> megreKSortedArrays(vector<vector<int>> v){
    vector<int> res;
    utilMergeArrays(v,res);
    return res;

}
int main(){
    int n;
    cout<<"enter total no of arrays"<<"\n";
    cin>>n;
    vector<vector<int>> v;
    for (int i = 0; i <n; i++)
    {
        cout<<"size of n is"<<n<<"\n";
        cout<<"enter size of array "<<i+1<<"\n";
        int m;
        cin>>m;
        vector<int> v2;
         cout<<"enter array elements"<<"\n";
        for (int j = 0; j<m; j++)
        {
            /* code */
        //    cout<<"inside ofor"<<"\n";
            int ele;
            cin>>ele;
            v2.push_back(ele);

        }
        v.push_back(v2);
    }
    // cout<<"Fucntuin call";
    auto it=megreKSortedArrays(v);
    printVector(it);
    
}