#include <iostream>
#include "linked_list.h"

using namespace std;

LinkedList::LinkedList()
{
    head = NULL;
    this->capacity = 0;
}

// node LinkedList::getNode(int index) const{
//     int i = 0;
//     node* ptr = head;
//     // while(i !=index)
//     // {
//     //     ptr->nextNode =
//     // }
//     return *ptr;
// }

void LinkedList::insertNode(int data)
{

    node *newNode = new node(data);

    if (head == NULL) // insert at the beginning
    {
        head = newNode;
        return;
    }
    else
    {
        node *tempNode = head;
        while (tempNode->nextNode != NULL)
        {
            tempNode = tempNode->nextNode;
        }

        // newNode.nextNode = tempNode->nextNode->nextNode;
        tempNode->nextNode = newNode;

        // delete tempNode;
    }
    this->capacity++;
}

void LinkedList::insertNode(node &newNode)
{
    if (head == NULL)
    {
        head = &newNode;
        this->capacity++;
        return;
    }
    node *tempNode = head;
    while (tempNode->nextNode != NULL)
    {
        tempNode = tempNode->nextNode;
    }

    tempNode->nextNode = &newNode;

    this->capacity++;

    cout << "capacity is " << this->capacity << endl;
}
void LinkedList::insertFront(node& newNode)
{
    newNode.nextNode = head;
    head = &newNode;
}
void LinkedList::insertFront(int data)
{
    node* newNode = new node(data);

    newNode->nextNode = head;
    head = newNode;
}

int LinkedList::getNodeVal(int index) const
{
    if (index > capacity - 1)
    {
        cout << "Index out of bound." << endl;
        return -1;
    }
    else{
        int i = 0;
        node *tempNode = head;
        while (i != index)
    {
        tempNode = tempNode->nextNode;
        i++;
    }

     return tempNode->data;
    }
    
}

void LinkedList::deleteNode(int index)
{
    if (head == NULL)
    {
        cout << " the list is empty" << endl;
        return;
    }
    else if (index > capacity - 1)
    {
        cout << "Index out of bound." << endl;
        return;
    }
    else{
        
        if (index==0)
        {
            node *tempNode = head->nextNode;
            head = tempNode;
        }
        else{
            node* tempNode1 = new node(head->data);
            tempNode1 = head;
            node *tempNode2;
            int i = 0;
            while(i!=index){
                tempNode2 = tempNode1;
                tempNode1 = tempNode1->nextNode;
                i++;
            }
            tempNode2->nextNode = tempNode1->nextNode;
            // delete tempNode1;
        }
    }
}

void LinkedList::printList()
{
    if (head == NULL)
    {
        cout << " the list is empty" << endl;
        return;
    }
    else
    {
        node *tempNode = head;
        while (tempNode != NULL)
        {
            cout << tempNode->data << " ";
            tempNode = tempNode->nextNode;
        }
        cout << endl;
    }
}


void LinkedList::reverseLinkedList()
{
    LinkedList* newList = new LinkedList();
    if (head == NULL){
        cout << "List is already empty"<< endl;
        return;
    }
    node* tempNode = this->head;
    int i = 0; 
    while (tempNode != NULL)
    {
        /* code */
        // tempNode = tempNode->nextNode;
        // tempNode = tempNode->nextNode;
        // tempNode = tempNode->nextNode;
        
        newList->insertFront(tempNode->data);
        tempNode = tempNode->nextNode;
        i++;
    }

    newList->printList();
    
    // newList->printList();

    delete newList;
}

void LinkedList::insertNode(node& newNode, int index)
{
    if (index == 0){
        newNode.nextNode = head;
        head = &newNode;
        this->capacity++;
        return;
    }
    node* tempNode = head;
    int i = 0;
    while(i < index-1)
    {
        tempNode = tempNode->nextNode;
        i++;
    }
    newNode.nextNode = tempNode->nextNode;
    tempNode->nextNode = &newNode;
    this->capacity++;

}