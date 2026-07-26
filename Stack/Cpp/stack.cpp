#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> stk;
    // push
    stk.push(1);
    stk.push(2);
    stk.push(3);
    // pop
    stk.pop();
    // size
    cout << stk.size() << endl;
    // top
    cout << stk.top() << endl;
    // check if empty
    cout << stk.empty() << endl;

    return 0;
}