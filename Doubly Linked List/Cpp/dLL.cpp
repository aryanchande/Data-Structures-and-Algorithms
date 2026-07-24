#include<iostream>
#include<list>
using namespace std;
int main(){
    list<int> l;
    //Insertion
    l.push_back(2);
    l.push_back(3);
    l.push_front(1);
    l.push_front(0);
    //size
    cout<<l.size()<<endl;
    //front and back element
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    //deletion
    l.pop_back();
    l.pop_front();
    //instertion in the middle
    auto i=l.begin();
    advance(i,1);
    l.insert(i,7);
    //removal of a middle element
    i=l.begin();
    advance(i,1);
    l.erase(i);
    //traversing
    for(auto e:l){
        cout<<e<<" ";
    }cout<<endl;
    
    return 0;
}