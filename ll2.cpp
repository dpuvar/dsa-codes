#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *insertAtFront(Node *head, int data)
{
    Node *p = new Node();
    p->data = data;
    p->next = head;
    head = p;
    return head;
}
void traversal(Node *head)
{
    Node *ptr = head;
    while (ptr != NULL)
    {
        cout << ptr->data << " ";
        ptr = ptr->next;
    }
}

Node *Merge(Node *a, Node *b)
{

    Node *ans = NULL;

    if (a == NULL)
        return (b);
    else if (b == NULL)
        return (a);

    if (a->data <= b->data)
    {
        ans = a;
        ans->next = Merge(a->next, b);
    }
    else
    {
        ans = b;
        ans->next = Merge(a, b->next);
    }

    return (ans);
}

int main()
{

    Node *a = NULL;
    a = insertAtFront(a, 7);
    a = insertAtFront(a, 2);
    a = insertAtFront(a, 1);

    cout << "the a traversal" << endl;
    traversal(a);

    Node *b = NULL;
    b = insertAtFront(b, 6);
    b = insertAtFront(b, 2);
    b = insertAtFront(b, 1);

    cout << "the b traversal" << endl;
    traversal(b);

    Node *head = NULL;
    head = Merge(a, b);

    cout << "the merged traversal" << endl;
    traversal(head);

    return 0;
}
