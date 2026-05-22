#include <bits/stdc++.h>
using namespace std;

class Queue {

private:

    static const int MAX_SIZE = 100;

    int arr[MAX_SIZE];

    int frontIndex;
    int rearIndex;
    int currentSize;

public:

    Queue()
        : frontIndex(0),
          rearIndex(-1),
          currentSize(0) {}

    void enqueue(int value) {

        if(isFull()) {
            throw overflow_error("Queue Overflow");
        }

        rearIndex = (rearIndex + 1) % MAX_SIZE;

        arr[rearIndex] = value;

        currentSize++;
    }

    int dequeue() {

        if(isEmpty()) {
            throw underflow_error("Queue Underflow");
        }

        int value = arr[frontIndex];

        frontIndex = (frontIndex + 1) % MAX_SIZE;

        currentSize--;

        return value;
    }

    int front() const {

        if(isEmpty()) {
            throw underflow_error("Queue Empty");
        }

        return arr[frontIndex];
    }

    bool isEmpty() const {
        return currentSize == 0;
    }

    bool isFull() const {
        return currentSize == MAX_SIZE;
    }

    int size() const {
        return currentSize;
    }
};