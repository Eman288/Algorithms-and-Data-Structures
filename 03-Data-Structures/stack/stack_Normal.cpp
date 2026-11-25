
#include <iostream>
using namespace std;

const int MAX_SIZE = 3;

class Stack
{
    // Private attributes
    int top;
    int item[MAX_SIZE];

public:

    // Constructor
    Stack()
    {
        top = -1;
    }

    // Add an element to the stack
    void Push(int ele)
    {
        if (top >= MAX_SIZE - 1)
        {
            cout << "The stack is full\n";
        }
        else
        {
            top++;
            item[top] = ele;
        }
    }

    // Return true if the stack is empty
    bool isEmpty()
    {
        return top == -1;
    }

    // Return true if the stack is full
    bool isFull()
    {
        return top == MAX_SIZE - 1;
    }

    // Remove the top element without returning it
    void Pop()
    {
        if (isEmpty())
        {
            cout << "The stack is empty\n";
        }
        else
        {
            top--;
        }
    }

    // Remove and return the top element
    int PopAndReturn()
    {
        if (isEmpty())
        {
            cout << "The stack is empty\n";
            return -1;
        }

        int element = item[top];
        top--;

        return element;
    }

    // Return the top element without removing it
    int Peek()
    {
        if (isEmpty())
        {
            cout << "The stack is empty\n";
            return -1;
        }

        return item[top];
    }

    // Return the number of elements
    int Size()
    {
        return top + 1;
    }

    // Display all elements
    void Display()
    {
        if (isEmpty())
        {
            cout << "The stack is empty\n";
            return;
        }

        for (int i = top; i >= 0; i--)
        {
            cout << item[i] << " ";
        }

        cout << endl;
    }
};

int main()
{
    Stack s1;

    s1.Push(10);
    s1.Push(20);
    s1.Push(30);

    s1.Display();

    cout << "Top element: " << s1.Peek() << endl;

    cout << "Removed: " << s1.PopAndReturn() << endl;

    s1.Display();

    return 0;
}
