#include <iostream>
using namespace std;
class node
{
public:
    int val;
    node *next;

    node(int x)
    {
        val = x;
        next = nullptr;
    }
};

int main()
{
    // creation
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    // traverse
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->val << endl;
        temp = temp->next;
    }
    return 0;
}
