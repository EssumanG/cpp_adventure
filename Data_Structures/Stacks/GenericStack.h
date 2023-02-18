#if !defined(STACK_H)
#define STACK_H

template <typename E>
class Stack
{
    public:
        Stack();
        int getSize() const{return size;}
        bool empty() const;
        const E& top() const;
        void push(const E);
        E pop();

    private:
        E elements[100];
        int size;
};

template <typename E>
Stack<E>::Stack()
{
    size = 0;
}

template <typename E>
bool Stack<E>::empty() const
{
    return size == 0;
}

template <typename E>
const E& Stack<E>::top() const
{
    return elements[size - 1];
}

template <typename E>
void Stack<E>::push(const E value)
{
    elements[size++] = value;
}

template <typename E>
E Stack<E>::pop()
{
    return elements[--size];
}

#endif // STACK_H
