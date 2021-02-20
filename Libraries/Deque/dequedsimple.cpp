#include "iostream"
#include "deque"
using namespace std;
void printDeque(deque<int>&de){
    cout<<"Deque is "<<"\n";
    for(auto i:de){
        cout<<i<<" ";


    }
    cout<<endl;

}
int main(){
    deque<int> de{5,6,7};
    de.push_back(10);
    de.push_back(12);
    de.push_back(15);
    de.push_front(19);
    de.push_front(92);
    printDeque(de);
    //insert
    deque<int>::iterator it=de.begin();
    it++;
    auto it2=de.insert(it,-1);
    printDeque(de);
    //pop i.e delete
    de.pop_back();
    de.pop_front();
    printDeque(de);

    //clear
    de.clear();
    printDeque(de);
    
}