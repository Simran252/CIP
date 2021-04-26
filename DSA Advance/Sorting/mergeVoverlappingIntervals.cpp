#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void printArray(vector <pair<int,int>> p){
     for (int i=0;i<p.size();i++)
        {
            cout<<p[i].first<<" "<<p[i].second<<"\n";
        }

}
vector<pair<int,int>> mergeOverlappingOccurences(vector<pair<int,int>> v){
    vector<pair<int,int>> res;
    int n=v.size(),y=-1;
    int mini=INT_MAX,maxi=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        y=-1;
        mini=INT_MAX,maxi=INT_MIN;

        for (int j = i+1; j < n; j++)
        {

            if((v[j].first)<(v[i].second)&&(v[j].second)>(v[i].first)){
               
                mini=min(mini,min(v[i].first,v[j].first));
                maxi=max(maxi,max(v[i].second,v[j].second));
                y=1;

            }
        }
       if(y==1){
            res.push_back({mini,maxi});
       }
    }
    return res;
    
}
int main(){
    
        int n;
        cout<<"enter size of array"<<"\n";
        cin>>n;
        int i=0,a,b;
        vector<pair<int,int> > p;
        cout<<"enter pair to ins"<<"\n";
        
        while (i<n)
        {
            cin>>a>>b;
            p.push_back({a,b});
            i++;
            
        }
        vector<pair<int,int>> ve= mergeOverlappingOccurences(p);
        cout<<"array is"<<"\n";
        printArray(ve);

        
        

        
}

// 4
// 1 3
// 2 4 
// 5 7
// 6 8

// 5
// 7 9
// 6 10
// 4 5
// 1 3
// 2 4
