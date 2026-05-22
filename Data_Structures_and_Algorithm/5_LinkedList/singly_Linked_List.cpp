#include <bits/stdc++.h>
using namespace std;

class LinkedList {

private:

    struct Node {

        int data;
        Node* next;

        Node(int value)
            : data(value), next(nullptr) {}
    };

    Node* head;
    int length;

public:

    LinkedList() : head(nullptr), length(0) {}

    ~LinkedList() {

        Node* curr = head;

        while(curr) {

            Node* temp = curr;
            curr = curr->next;

            delete temp;
        }
    }

    void insertFront(int value) {

        Node* newNode = new Node(value);

        newNode->next = head;
        head = newNode;

        length++;
    }

    void insertBack(int value) {

        Node* newNode = new Node(value);

        if(!head) {
            head = newNode;
            length++;
            return;
        }

        Node* curr = head;

        while(curr->next) {
            curr = curr->next;
        }

        curr->next = newNode;

        length++;
    }

    void display() const {

        Node* curr = head;

        while(curr) {

            cout << curr->data << " -> ";

            curr = curr->next;
        }

        cout << "NULL\n";
    }

    int size() const {
        return length;
    }
};

int main() {

    LinkedList list;

    list.insertFront(10);
    list.insertFront(5);
    list.insertBack(20);

    list.display();
}