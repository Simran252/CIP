// #include<bits/stdc++.h>
// using namespace std;
// // 2 3 4 5 6
// // void printVector(vector<int> &res){
// //     cout<<"ve is "<<res.size()<<"\n";

// //     for(auto it:res){
// //         cout<<it<<" ";
// //     }
// //     cout<<"\n";
// // }
// // vector<int> solve(vector<int> & A){
// //     int n=A.size();
// //     vector<int>res(n,0);
// //     int count=0;
// //     for(int i=0;i<A.size();i++){
// //         count=0;
// //         for(int j=i+1;j<A.size();j++){
// //             if(A[i]%A[j]==0||A[j]%A[i]==0){
// //                 res[i]++;
// //                 res[j]++;


// //             }
// //         }
// //     }
// //     return res;
// // }
// // int main(){
// //     int n;
// //     cin>>n;
// //     int a;
    
// //     vector<int> A;
// //     for(int i=0;i<n;i++){
// //         cin>>a;
// //         A.push_back(a);
        
// //     }
    
// //     auto it=solve(A);
// //     printVector(it);
// // }




// //ques 2



// int getMid(int s, int e) {
//     return s + (e -s)/2; 
//     }
// int getSumUtil(int *st, int ss, int se, int qs, int qe, int si)
// {
// 	if (qs <= ss && qe >= se)
// 		return st[si];
// 	if (se < qs || ss > qe)
// 		return 0;

// 	int mid = getMid(ss, se);
// 	return getSumUtil(st, ss, mid, qs, qe, 2*si+1) +
// 		getSumUtil(st, mid+1, se, qs, qe, 2*si+2);
// }

// void updateValueUtil(int *st, int ss, int se, int i, int diff, int si)
// {
// 	if (i < ss || i > se)
// 		return;
// 	st[si] = st[si] + diff;
// 	if (se != ss)
// 	{
// 		int mid = getMid(ss, se);
// 		updateValueUtil(st, ss, mid, i, diff, 2*si + 1);
// 		updateValueUtil(st, mid+1, se, i, diff, 2*si + 2);
// 	}
// }

// void updateValue(int arr[], int *st, int n, int i, int new_val)
// {
// 	if (i < 0 || i > n-1)
// 	{
// 		cout<<"Invalid Input";
// 		return;
// 	}

// 	int diff = new_val - arr[i];

// 	arr[i] = new_val;

// 	updateValueUtil(st, 0, n-1, i, diff, 0);
// }

// int getSum(int *st, int n, int qs, int qe)
// {

// 	if (qs < 0 || qe > n-1 || qs > qe)
// 	{
// 		cout<<"Invalid Input";
// 		return -1;
// 	}

// 	return getSumUtil(st, 0, n-1, qs, qe, 0);
// }
// int constructSTUtil(int arr[], int ss, int se, int *st, int si)
// {
// 	if (ss == se)
// 	{
// 		st[si] = arr[ss];
// 		return arr[ss];
// 	}
// 	int mid = getMid(ss, se);
// 	st[si] = constructSTUtil(arr, ss, mid, st, si*2+1) +
// 			constructSTUtil(arr, mid+1, se, st, si*2+2);
// 	return st[si];
// }
// int *constructST(int arr[], int n)
// {	int x = (int)(ceil(log2(n)));

// 	int max_size = 2*(int)pow(2, x) - 1;

// 	int *st = new int[max_size];

// 	constructSTUtil(arr, 0, n-1, st, 0);

// 	return st;
// }

// vector<int> solve(vector<int> &A,vector<vector<int>> &B){
//     vector<int> res;
//     int j=0;
//     int arr[A.size()];
//     for(auto i:A){
//         if(j%2!=0){
//             i=-i;
//         }
//         arr[j]=i;
//         j++;
        
//     }
//     int*st=constructST(arr,A.size());
//     for(auto it:B){
//         cout<<"ener for"<<"\n";
//         if(it[0]==1){
//             cout<<"ener if"<<"\n";
            
//             int val=it[2];
//             int index=it[1]-1;
//             if(index%2==1){
//                 val=-val;

//             }
//             updateValue(arr,st,A.size(),index,val);

//         }
//         else{
//             cout<<"ener else"<<"\n";
//             int a=getSum(st,A.size(),it[1]-1,it[2]-1);
//             if(it[1]%2==0){
//                 a=-a;


//             }
//             res.push_back(a);

//         }

//     }
//     return res;

// }

// int main()
// {
// 	int n,m;
//     cin>>n;
//     int a;
    
//     vector<int> A;
//     for(int i=0;i<n;i++){
//         cin>>a;
//         A.push_back(a);
        
//     }
//     cin>>m;
//     vector<vector<int>> B;
//     for(int i=0;i<m;i++){
//         int a;
//         vector<int> col;
//         for(int j=0;j<3;j++){
//             cin>>a;
//             col.push_back(a);
//         }
//         B.push_back(col);

//     }
//     auto it=solve(A,B);
//     printVector(it);
// 	return 0;
// }
// // 5
// // 1 -2 3 4 5
// // 3
// // 2 1 5
// // 1 4 -1
// // 2 1 5



// #include<bits/stdc++.h>
// using namespace std;
// long long int solve(long long int arr[],long long int n){
    
//     long long int res=0;
//     for(int i=0;i<n;i++){
//         if(i==0){
//             res=max(res,arr[0]*arr[1]);

//         }#include<bits/stdc++.h>
// using namespace std;
//         else if(i==(n-1)){
//             res=max(res,arr[n-1]*arr[n-2]);
//         }
//         else{
//             res=max(res,max(arr[i-1]*arr[i],arr[i+1]*arr[i]));

//         }
//     }
//     return res;
// }
    
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         long long int n;
//         cin>>n;
//         long long int arr[n];
//         for(int i=0;i<n;i++){
//             cin>>arr[i];
//         }
//         cout<<solve(arr,n)<<"\n";

//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
long long int solve(long long int n){
    if(n<=6){
        return 15;
    }
    if(n%2==0){
        return (n*2.5);

    }
    else{
        return ((n+1)*2.5);
    }


}
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        cout<<solve(n)<<"\n";

    }
}