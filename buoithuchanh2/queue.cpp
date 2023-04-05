#include <iostream>
using namespace std;

#define MAX_SIZE 100 // maximum size of the queue

class Queue {
private:
    int front, rear; // front and rear of the queue
    int arr[MAX_SIZE]; // array to store elements in the queue
public:
    Queue() { // constructor
        front = -1;
        rear = -1;
    }

    // function to check if the queue is empty
    bool isEmpty() {
        return (front == -1 && rear == -1);
    }

    // function to check if the queue is full
    bool isFull() {
        return (rear == MAX_SIZE - 1);
    }

    // function to add an element to the rear of the queue
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue overflow!" << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;
        }
        else {
            rear++;
        }
        arr[rear] = value;
    }

    // function to remove an element from the front of the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow!" << endl;
            return;
        }
        if (front == rear) {
            front = rear = -1;
        }
        else {
            front++;
        }
    }

    // function to get the front element of the queue
    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    // function to display the elements in the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return;
        }
        cout << "Elements in the queue: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(15);
    q.display();
    q.dequeue();
    q.display();
    cout << "Front element: " << q.peek() << endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();
    return 0;
}
