#include<iostream>
#include<algorithm>   
#include<stack>
// #include "template.h"
using namespace std; 
int efficientSolution(int arr[],int n){
    stack<int> s;
    int res=0;
    int tp=0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        //next smaller
        while (s.empty()!=true&&arr[s.top()]>=arr[i])
        {
            /* code */
             tp=s.top();
             s.pop();
            int curr=arr[tp]*(s.empty()?i:(i-s.top()-1));
            res=max(res,curr);  

        }
        s.push(i);
    }
        //previous smaller
        while (s.empty()==false)
        {
            /* code */
            tp=s.top();
            s.pop();
            int curr=arr[tp]*(s.empty()?n:n-s.top()-1);
            res=max(res,curr);

        }
        return res; 
    

}
int betterSol(int arr[],int n){
    //previous smallest
    stack<int> st;
    int arr1[n],arr2[n];
    st.push(0);

    // 6 2 5 4 1 5 6 5 4
    int j=1; 
    //previous smaller
    for (int i = 0; i < n; i++)
    {
        while (st.empty()==false&&arr[st.top()]>=arr[i])
        {
            /* code */
           st.pop();

        }
        int ans=st.empty()==true?-1:st.top();
        arr1[i]=ans;
        st.push(i);
    

        
    } 
       
    while (st.empty()!=true)
    {
        /* code */
        st.pop();
    }

    
    //next smallest 
    st.push(n-1);
    for (int i = n-1; i>=0; i--)
    {
        /* code */
        while (st.empty()!=true&&arr[st.top()]>=arr[i])
        {
            /* code */
            st.pop();
        }
        
        int ans=st.empty()==true?n:st.top();
        arr2[i]=ans;
        st.push(i);  


    }
     
    cout<<endl;
    int curr=0,maximum=0;
    for (int i = 0; i <n; i++)
    {
        /* code */
        curr=arr[i];
        curr+=(i-arr1[i]-1)*arr[i];
        curr+=(arr2[i]-i-1)*arr[i];
        maximum=max(curr,maximum);

    }
    return maximum;
    


}
int largestAreaInAHistogram(int arr[],int n){  
    int maximum=arr[0];  
    int area=0;
    for (int i = 1; i <n; i++)
    {
        area=arr[i];
        /* code */
        for (int j = i-1; j>=0; j--)
        {
            /* code */
            if (arr[j]>=arr[i])
            {

                /* code */
                area=area+arr[i];


                
            }
            else{
                break;
            }
      
        }
          for (int j = i+1; j<n; j++)
        {
            /* code */
            if (arr[j]>=arr[i])
            {

                /* code */
                area=area+arr[i];
                

                
            }
            else{
                break;
            }
            
      
        }

        maximum=max(maximum,area);

    }
    return maximum;
    


}
int main(){
   
 
    int n,t;
    cout<<"enter test cases"<<"\n";
    cin>>t;
    while (t--)
    {
        /* code */
         cout<<"enter array size"<<"\n";
        cin>>n;
        int arr[n];
        for (int i = 0; i <n; i++)
        {
            /* code */   
            cin>>arr[i];
        }
        cout<<largestAreaInAHistogram(arr,n)<<endl;

        //better solution
        int res=betterSol(arr,n);
        cout<<"better Solution is "<<res<<endl;
         cout<<"Efficient solution is "<<res<<endl;

         efficientSolution(arr,n);


    }
    
   
    
}