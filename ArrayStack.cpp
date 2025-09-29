#include <iostream>
using namespace std;

const int MAX_ITEMS = 5;  // Change size as needed

class Stack {
private:
    int data[MAX_ITEMS];
    int top;

public:
    Stack() {
        top = -1;  // Initially, the stack is empty
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX_ITEMS - 1;
    }

    void push(int newItem) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << newItem << endl;
            return;
        }
        top = top + 1;
        data[top] = newItem;
        cout << newItem << " pushed to stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return;
        }
        int poppedItem = data[top];
        top = top - 1;
        cout << poppedItem << " popped from stack." << endl;
    }

    void peek() {
        if (isEmpty()) {
            cout << "Stack is empty. Nothing to peek." << endl;
        } else {
            cout << "Top of stack: " << data[top] << endl;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack contents (top to bottom): ";
        for (int i = top; i >= 0; i--) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

// Main function to test stack
int main() {
    Stack myStack;

    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    myStack.peek();        // Show top item
    myStack.display();     // Display full stack

    myStack.pop();         // Remove top item
    myStack.peek();        // Show top item
    myStack.display();     // Display full stack

    return 0;
}