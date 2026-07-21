#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    //enqueue
    q.push(1);
    q.push(2);
    q.push(3);
    //front element
    cout<<q.front()<<endl;
    //last element
    cout<<q.back()<<endl;
    //dequeue
    q.pop();
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;
    return 0;

}