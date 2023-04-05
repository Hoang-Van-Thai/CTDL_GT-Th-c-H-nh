#include <iostream>
using namespace std;

#define MAX_SIZE 100 // maximum size of the stack

class Stack {
private:
    int top; // top of the stack
    int arr[MAX_SIZE]; // array to store elements in the stack
public:
    Stack() { // constructor
        top = -1;
    }

    // function to check if the stack is empty
    bool isEmpty() {
        return (top == -1);
    }

    // function to check if the stack is full
    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    // function to push an element into the stack
    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow!" << endl;
            return;
        }
        arr[++top] = value;
    }

    // function to pop an element from the stack
    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow!" << endl;
            return;
        }
        top--;
    }

    // function to get the top element of the stack
    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    // function to display the elements in the stack
    void display() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return;
        }
        cout << "Elements in the stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.display();
    s.pop();
    s.display();
    cout << "Top element: " << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.display();
    return 0;
}
