#include<bits/stdc++.h>
using namespace std;
void printVec(vector<string> &res){
    for(auto it:res){
        cout<<it<<" ";

    }
    cout<<"\n";

}
bool checkSafe(int l,int r,string s){
    if(l!=0&&s[l-1]=='A'&&s[r]=='B'){
        return false;

    }
    else if(l==(s.size()-2)&&s[r]=='A'&&s[l]=='B'){
        return false;
    }
    return true;

}
void generateAB(string s,int n,vector<string> &ab,int index){
    if(index==(n-1)){
        ab.push_back(s);
        return;

    }
    for(int i=index;i<n;i++){
            swap(s[index],s[i]);
            generateAB(s,n,ab,index+1);
            swap(s[index],s[i]);
        }

}
void generatePermutationsNotHavingab(string s,int n,vector<string> &res,vector<string> &ab,int index){
    
    if(index==(n-1)){
        res.push_back(s);
        return;

    }
    for(int i=index;i<n;i++){
        
        if(checkSafe(index,i,s)==true){
            swap(s[index],s[i]);
            generatePermutationsNotHavingab(s,n,res,ab,index+1);
            swap(s[index],s[i]);
        }
        else{

            swap(s[index],s[i]);
            generateAB(s,n,ab,index+1);
            swap(s[index],s[i]);

        }
    }
    

}
int main(){
    string s;
    cin>>s;
    vector<string> res;
    vector<string> ab;
     
    generatePermutationsNotHavingab(s,s.size(),res,ab,0);
    printVec(res);
    printVec(ab);

}