#include<iostream>
#include<deque>
#include<stack>
#include<vector>
#include<unordered_map>
using namespace std;
void printVec(vector<int> &vc){
    for (auto it:vc)
    {
        /* code */
        cout<<it<<" ";
    }
    cout<<endl;
    

}
vector<int> maximuumInAllSubarrayOfSizeK(int arr[],int n,int k){
        deque<int> dq;
        vector<int> vc;
        for (int i = 0; i <k; i++)
        {
            while (dq.empty()==false&&dq.back()<arr[i])
            {
                dq.pop_back();
            }
            dq.push_back(arr[i]);
        }
        vc.push_back(dq.front());
        dq.pop_front();
        for (int i = k; i <n; i++)
        {
           while (dq.empty()==false&&dq.front()<=arr[i])
           {
               /* code */
               dq.pop_front();
           }
           if (dq.front()>arr[i])
           {
               /* code */
               dq.push_front(arr[i]);

           }
           else{
               dq.push_front(arr[i]);
                vc.push_back(dq.front());
           }
           
          
        //    dq.pop_front();

        }
        return vc;
        
    }
int main(){
    int a;
    cin>>a;
    int sum=0,count=0;
    unordered_map<int,int> uset;
    uset.insert({0,0});
    for (int i = 1; sum<100000; i++)
    {
        /* code */
        sum=sum+i;
        // cout<<sum<<" ";
        // cout<<"sum"<<(sum-a)<<" ";
        if(uset.find(sum-a)!=uset.end()){
            //present
            cout<<uset[sum-a]+1<<"\n";
            count++;

        }
        uset.insert({sum,i}); 

    }
    cout<<"ans "<<count<<"\n";
    



    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    int k;
    cin>>k;
    vector<int> v=maximuumInAllSubarrayOfSizeK(arr,n,k);
    printVec(v);

    // 10 8 5 12 15 7 6
    

}