#include <iostream>
using namespace std;

class Node
{
    public :
    int data;
    Node *next;

    Node()
    {
        next = NULL;
    }
};

class Stack
{
    private :
    Node *top;

    public :
    Stack()
    {
        top = NULL;
    }

    int push(int value)
    {
        Node *newNode = new Node ();
        newNode -> data = value;
        newNode -> next = top;
        top = newNode;
        cout << "Push Value :" <<value <<endl;
        return value;

    }

    void pop ()
    {
        Node *temp = top;
        if (isEmpty())
        {
            cout << "Stack is Empty." <<temp ->data <<endl;
            return;
        }

        cout << "Popped value :" <<temp -> data <<endl;
        top = temp -> next;
        delete temp; 
    }

    void peek()
    {
        if(isEmpty())
        {
            cout <<"List is Empty." <<endl;
        }
        else
        {
            Node *current = top;
            while (current != NULL)
            {
                cout << current ->data <<""<<endl;
                current = current ->next;
            }
        }
    }
};