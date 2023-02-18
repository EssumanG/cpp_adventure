#include <iostream>
#include "linked_list.h"

using namespace std;


int main(){
    LinkedList newList;



    newList.printList();




    // newList.insertNode(5);
    // newList.insertNode(7);
    node n1(4);
    node n2(7);
    node n3(13);
    node n4(45);
    newList.insertNode(n4, 0);
    newList.insertNode(n1);
    newList.insertNode(n2);
    newList.insertNode(8);
    newList.insertNode(5);
    newList.printList();
    newList.insertNode(n3, 0);

    // int val = newList.getNodeVal(1);

    // cout << "The value of the node is " << val << endl;
    // newList.deleteNode(1);
    newList.printList();
    newList.reverseLinkedList();

return 0;

}