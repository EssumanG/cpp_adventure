#if !defined(LINKEDLIST)
#define LINKEDLIST

#include "node.h"
class LinkedList
{
    public:
        LinkedList();
        int getNodeVal(int) const; 
        void insertNode(int);
        void insertNode(node&);
        void insertNode(node&, int);
        void deleteNode(int);
        void reverseLinkedList();
        void printList();
        node* head;
        void insertFront(node&);
        void insertFront(int);

    private:
        int capacity;

};


#endif // LINKEDLIST
