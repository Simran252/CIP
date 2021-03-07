#include<iostream>
#include<algorithm>
#include<algorithm>
#include<vector>
using namespace std;
class Point{
    public:
    int x;
    int y;
    Point(int x,int y){
        this->x=x;
        this->y=y;

    }

};
//compare accroding to x values

bool mycmp(Point p1,Point p2){
    return p1.x<p2.x;
    
}

int main(){
    vector<int> v{10,20,50,60,70,90};
    int x;
    cout<<"enter ele to serach"<<"\n";
    cin>>x;
    if (binary_search(v.begin(),v.end(),x))
    {
        cout<<"elemnet is present"<<"\n";
    }else{
        cout<<"elemnent is not present"<<"\n";
    }
    
    //arrays
    int arr[]={10,20,50,60,70,90,101};
    if (binary_search(arr,arr+7,x))
    {
       
     cout<<"elemnet is present"<<"\n";
    }else{
        cout<<"elemnent is not present"<<"\n";
    }

    //for user defined func
    vector<Point> ve={{10,5},{2,100},{50,90}};
    sort(ve.begin(),ve.end(),mycmp);

    Point p1(11,200);
    if (binary_search(ve.begin(),ve.end(),p1,mycmp))
    {
        cout<<"present"<<"\n";
    }else
    {
        cout<<"not present"<<"\n";
    }
    
    
    
}