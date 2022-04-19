#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};


// int getNthNodeFromEnd(struct Node* head, int n){
// struct Node * ptr =head;
// int l=0;
// while (ptr!=NULL)
// {
//     ptr=ptr->next;
//     l++;
// }
// ptr = head;
// for (int i=0;i<l-n;i++) {
//    ptr=ptr->next;
// }

// return ptr->data;
// }

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

int GetNthFromEnd(Node *head, int l, int n)
{
    int index = l-n;
    Node *current = head;
    int count = 0;
    while (current != NULL)
    {
        if (count == index)
            return (current->data);
        count++;
        current = current->next;
    }
}

int main()
{

    Node *a = NULL;
    a = insertAtFront(a, 3);
    a = insertAtFront(a, 2);
    a = insertAtFront(a, 1);
    // a = insertAtFront(a, 44);
    // a = insertAtFront(a, 13);
    traversal(a);
    // int t;
    // while (t--)
    // {int n,l;
    // cin>>n>>l;
    cout << endl;
    cout << GetNthFromEnd(a, 3, 3) << endl;

    // }

    return 0;
}
