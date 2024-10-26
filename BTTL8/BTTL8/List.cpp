#include "List.h"
#include<iostream>
using namespace std;

List::List(): head(NULL), tail(NULL), size(0) {}

void List::push_back(double x)
{
    Node* newNode = new Node(x);
    if (!tail) {
        tail = head = newNode;
    } 
    else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    size++;
}
void List::pop(double x)
{
    Node* current = head;
    while (current)
    {
        if (current->data == x)
        {
            if (current->prev) current->prev->next = current->next;
            if (current->next) current->next->prev = current->prev;
            if (current == head) head = current->next;
            if (current == tail) tail = current->prev;
            delete current;
            size--;
            return;
        }
        current = current->next;
    }
 
}
void List::popX(double x) {
    Node* current = head;
    while (current) {
        Node* toDelete = current;  
        if (current->data == x) {
            if (current->prev)
                current->prev->next = current->next;
            if (current->next)
                current->next->prev = current->prev;
            if (current == head)
                head = current->next;
            if (current == tail)
                tail = current->prev;
            current = current->next;
            delete toDelete;
            size--;
        }
        else {
            current = current->next;
        }
    }
}

void List::DoiX(int x, double y)
{
    Node* current = head;
    int i = 0;
    while (current)
    {
        if (i == x)
        {
            current->data = y;
            return;
        }
        current = current->next;
        i++;
    }
 
}
void List::Xuat()
{
    if (size == 0) return;
    Node* current = head;
    cout << "[";
    while(current!=tail)
    {
        cout<<current->data<<",";
        current = current->next;
    }
    cout << tail->data << "]";
}
