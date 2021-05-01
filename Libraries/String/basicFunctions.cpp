#include<iostream> 
using namespace std;
int main(){
    string s="geeksforgeeks"; 
    cout<<"string is "<<s<<"\n"; 
    cout<<"size of string is "<<s.size()<<"\n";

    //more functions on stings
    //substr()
    cout<<(s.substr(3,8 ))<<"\n";
    //append string 
    s=s+"complete cip";;
    //  find a substring in string 
    cout<<(s.find("eek"))<<"\n";
     
     //more about find function 
     int position=s.find("code");
     if (position==string::npos)
     {
         /* code */
         cout<<"not present"<<"\n";
     }
     else{
         cout<<"present at index "<<position<<"\n";
     }
     
      //comparision operators on strings
      string s1="abc";
      string s2="bcd";
      if(s1==s2) cout<<"both string are same i.e equal"<<"\n"; 
      else if(s1<s2) cout<<"s1 is lexiographically smaller than s2"<<"\n"; 
      else cout<<"s2 is smaller"<<"\n";
   
    //traversing a string 
    for (char i:s)
    {
        cout<<i;
    }
    cout<<"\n"; 
    for (int i = 0; i <s.size(); i++)
    { 
        cout<<s[i];
    }
     cout<<"\n"; 
    for (auto i=s.begin();i!=s.end();i++)
    { 
        cout<<(*i);
    }
    

      cout<<"\n"; 

      //advanced built in function
      int n=-1;
      cout<<"no of set bits " <<__builtin_popcount(n);
     

}