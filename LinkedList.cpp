#include <iostream>
#include "LinkedList.h"
using namespace std;
//Reference: https://www.geeksforgeeks.org/merge-sort-for-linked-list/

Node *LinkedList::remove_head()
{
    if (head == nullptr) return nullptr;

    Node *removed_head = head;
    head = head->next;

    // Is the list now empty?
    if (head == nullptr) tail = nullptr;

    size--;
    return removed_head;
}

void LinkedList::add(const Element& elmt)
{
    Node *node = new Node(elmt);
    add(node);
}

void LinkedList::add(Node *node)
{
    // First node.
    if (head == nullptr)
    {
        head = tail = node;
    }

    // Subsequent node.
    else
    {
        tail->next = node;
        tail = node;
    }

    node->next = nullptr;
    size++;
}

void LinkedList::clear()
{
    // Repeatedly delete the head node until the list is empty.
    while (head != nullptr)
    {
        Node *next = head->next;
        delete head;
        head = next;
    }

    tail = nullptr;
    size = 0;
}

void LinkedList::print() const
{
    for (Node *ptr = head; ptr != nullptr; ptr = ptr->next)
    {
        cout << " " << ptr->element.get_value();
    }
    cout << endl;
}

void LinkedList::split(LinkedList& list1, LinkedList& list2)
{
    int size1, size2;
     size1 = size/2;
     if(size%2 == 0)
     {
         size2 = size1;
     }
     else
     {
        size2 = size1 + 1;
     }
     Node *mid = head;
     for (int i = 1; i < size1; i++)
     {
         mid = mid->next;
     }
     Node *mid_next = mid->next;

     list1.set(head, mid,size1);
     list2.set(mid_next, tail,size2);
}

void LinkedList::concatenate(LinkedList& other_list)
{
   tail->next=other_list.head;
   this->set(this->head,other_list.get_tail(),size+other_list.size);
   other_list.reset();
}