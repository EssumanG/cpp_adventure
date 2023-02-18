#if !defined(Node)
#define Node

struct node
{
    /* data */
    int data;
    node* nextNode;

    node(int data)
    {
        this->data = data;
        this->nextNode = NULL;
    }
};


#endif // Node
