#include <stdio.h>
#include <iostream>

using namespace std;

class node
{
public:
    int data;
    node *next;
};

void printl(node *a)
{
    while (a != NULL)
    {
       cout<< a->data<<endl;
        a = a->next;
    }
}

int main()
{
    // declaring the list
    node *head = NULL;
    node *n1 = NULL;
    node *n2 = NULL;
    node *n3 = NULL;
    node *tail = NULL;
    //
    head = new node();
    n1 = new node();
    n2 = new node();
    n3 = new node();
    tail = new node();
    // allocating the lists values
    head->data = 45;
    // point to the next node
    head->next = n1;

    n1->data = 3;
    n1->next = n2;
    n2->data = 34;
    n2->next = n3;
    n3->data = 17;
    n3->next = tail;
    tail->data = 82;
    tail->next = NULL;

    printl(head);
    return 0;
}