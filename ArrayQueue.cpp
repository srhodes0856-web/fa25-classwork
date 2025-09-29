#include <iostream>
using namespace std;

const int MAX_ITEMS = 10;

// =============================
// Case 1: Fixed Front, Moving Rear (Shift on Dequeue)
// =============================
class FixedFrontQueue {
private:
    int data[MAX_ITEMS];
    int rear;

public:
    FixedFrontQueue() {
        rear = 0;
    }

    bool isFull() {
        return rear == MAX_ITEMS;
    }

    bool isEmpty() {
        return rear == 0;
    }

    void enqueue(int newItem) {
        // TODO: Implement this
    }

    void dequeue() {
        // TODO: Implement this with shifting
    }

    int search(int target) {
        // TODO: Implement this
        return -1;
    }

    void display() {
        // TODO: Print all elements from front (index 0) to rear - 1
    }
};

// =============================
// Case 2: Moving Front and Rear (No Shifting)
// =============================
class MovingWindowQueue {
private:
    int data[MAX_ITEMS];
    int front, rear;

public:
    MovingWindowQueue() {
        front = 0;
        rear = 0;
    }

    bool isFull() {
        return rear == MAX_ITEMS;
    }

    bool isEmpty() {
        return front == rear;
    }

    void enqueue(int newItem) {
        // TODO: Implement this
    }

    void dequeue() {
        // TODO: Implement this
    }

    int search(int target) {
        // TODO: Implement this from front to rear - 1
        return -1;
    }

    void display() {
        // TODO: Print all elements between front and rear
    }
};

// =============================
// Case 3: Circular Queue (Wrap Around)
// =============================
class CircularQueue {
private:
    int data[MAX_ITEMS];
    int front, rear;

public:
    CircularQueue() {
        front = 0;
        rear = 0;
    }

    bool isFull() {
        return (rear + 1) % MAX_ITEMS == front;
    }

    bool isEmpty() {
        return front == rear;
    }

    void enqueue(int newItem) {
        // TODO: Implement this using modulo
    }

    void dequeue() {
        // TODO: Implement this using modulo
    }

    int search(int target) {
        // TODO: Implement this loop using modulo
        return -1;
    }

    void display() {
        // TODO: Print from front to rear using modulo
    }
};

// =============================
// Test all queues
// =============================
int main() {
    FixedFrontQueue q1;
    MovingWindowQueue q2;
    CircularQueue q3;

    // TODO: Uncomment and test each class one by one
    // q1.enqueue(10);
    // q1.display();

    // q2.enqueue(20);
    // q2.display();

    // q3.enqueue(30);
    // q3.display();

    return 0;
}