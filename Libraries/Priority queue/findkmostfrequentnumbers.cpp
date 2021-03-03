#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<queue>
using namespace std;

void printVec(vector<int > pvec){
    vector<int> ::iterator it;
    for(it=pvec.begin();it!=pvec.end();it++){
        cout<<(*it);

    }
    cout<<"\n";


}

void linerTimePreferenceToLatestEle(int*arr,int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    } 
    vector<int> freq[n+1];
    for (int i = 0; i < n; i++)
    {
        int f=m[arr[i]];
        if (f!=-1)
        {
            /* code */
            freq[f].push_back(arr[i]);
            m[arr[i]]=-1;
        }

        int c=0;
            for (int i =n;i>=0;i--)
            {
                for (auto x:freq[i])
                {
                    
                    cout<<x<<" ";
                    c++;
                if (c==k)
                {
                    return;
                }
                }

            }
        
       
       
        
        
    }
    int c=0;
    for (int i =n;i>=0;i--)
    {
        for (auto x:freq[i])
        {
            
            cout<<x<<" ";
            c++;
        if (c==k)
        {
            return;
        }
        }

    }

}

void linerTime(int*arr,int n,int k){
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    vector<int> freq[n+1];
    for(auto x:m){
        freq[x.second].push_back(x.first);


    }
     int c=0;
    for(int i=n;i>=0;i--){
       
      
           for (auto x:freq[i])
           {
               /* code */
               cout<<x<<" ";
               c++;
               if (c==k)
               {
                   /* code */
                   return;
               }

       }
       
        
    }

}
struct mycmpare{
    bool operator()(pair<int,int > p1,pair<int,int> p2){
        if (p1.second==p2.second)
        {
            /* code */
            return (p1.first)>(p2.first);
        }
        return p1.second<p2.second;



    }
};


void efficientkMostFrequentItems(int*arr,int n,int k){
    unordered_map<int,int> umap;
    for(int i=0;i<n;i++){
         umap[arr[i]]++;

    }
    priority_queue<pair<int,int>,vector<pair<int,int>>,mycmpare> p(umap.begin(),umap.end());

    for(int i=0;i<k;i++){
       cout<<p.top().first<<" ";
       p.pop();

 
    }

}

bool compare(pair<int,int> p1,pair<int,int> p2){
    if (p1.second==p2.second)
    {
        /* code */
        return p1.first<p2.first;
    }else{
        return p1.second>p2.second;
    }
    


}

void kMostFrequentItems(int*arr,int n,int k){
    
   //unorered_map
   unordered_map<int,int> m;
   for(int i=0;i<n;i++){
       m[arr[i]]++;

   }

   vector<pair<int,int>> v(m.begin(),m.end());
   sort(v.begin(),v.end(),compare);
   for(int i=0;i<k;i++){
       cout<<v[i].first<<"\n";
   }
   
   

}

int main(){
    int T;
    cout<<"enter test cases"<<"\n";
    cin>>T;
    while(T--){
        
    int n;
    cout<<"Enter size"<<"\n";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter k"<<"\n";
    cin>>k;
    kMostFrequentItems(arr,n,k);
    cout<<"\n";
    cout<<"effieckt sol using priority queue"<<endl;

    efficientkMostFrequentItems(arr,n,k);
    cout<<"\n";
     cout<<"more effiecefficient sol "<<endl;
    linerTime(arr,n,k);

    cout<<"\n";
     cout<<"more effiecefficient sol preference to latest ele "<<endl;
    linerTimePreferenceToLatestEle(arr,n,k);














}

}