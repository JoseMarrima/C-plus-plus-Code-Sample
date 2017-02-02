#include <iostream>

using namespace std;

//Suppose that the Node structure is as follows
class Node {
public:
    int data;
    Node * next;
};
//Then, your non-recursive function is as follows:
int NumNodes(Node* first) {
    int count = 0;
    while (first != NULL) {
        count++;
        first = first->next;
    }
    return count;
}

int main()
{
    Node *obj;
    NumNodes(obj);
    
    return 0;
}

//Then, your recursive function is as follows:
int NumNodes(Node* first)
{
    if (first == NULL)
    {
        return 0;
    }
    else
        return 1 + NumNodes(first);
}