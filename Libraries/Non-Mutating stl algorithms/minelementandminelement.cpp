#include<iostream>
#include<algorithm>
#include<algorithm>
#include<vector>
using namespace std;
class Point{
    public:
    int x,y;
    Point(int x,int y){
        this->x=x;
        this->y=y;

    }

};

bool mycmp(Point p1,Point p2){
    return (p1.x)<(p2.x);

}
int main(){
    vector<int> vec{4,3,5,6,7,-1};
    auto it=max_element(vec.begin(),vec.end());
    cout<<"max element is "<<(*it)<<"\n";

     it=min_element(vec.begin(),vec.end());
    cout<<"min element is "<<(*it)<<"\n";
    //arrays
    int arr[]={2,3,4,5,6,11};
    cout<<(*min_element(arr,arr+6))<<"\n";
    cout<<(*max_element(arr,arr+6))<<"\n";

    //user defined function
    
    vector<Point> v{{1,21},{11,345},{0,56},{101,101}};
    auto max=max_element(v.begin(),v.end(),mycmp);
    cout<<"max "<<max->x<<" "<<max->y<<"\n";

    auto min=min_element(v.begin(),v.end(),mycmp);
    cout<<"min "<<min->x<<" "<<min->y<<"\n";








    


}