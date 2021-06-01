#include<iostream>
using namespace std;
void proBabyNeBolaHaiRecursionSeKrnaH(int arr[],int n){
    if (n==2)
    {
        /* code */
        return 0;
    }

    proBabyNeBolaHaiRecursionSeKrnaH(arr+1,n);


    


}
int main(){

    int n;
    cin>>n;
    int arr[n]; 
    for (int i = 0; i <n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    proBabyNeBolaHaiRecursionSeKrnaH(arr,n);    


}
