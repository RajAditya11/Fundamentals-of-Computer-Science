#include <iostream>

using namespace std;

// =========================
// Class Based Linked List
// =========================

class Node {

public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {

    Node* head;

public:

    LinkedList() {
        head = nullptr;
    }

    // Insert at End
    void insertRear(int value) {

        Node* newNode = new Node(value);

        if(head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;

        while(temp->next != nullptr) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    // Display
    void display() {

        Node* temp = head;

        while(temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "nullptr\n";
    }
};

// =========================
// Struct Based Linked List
// =========================

struct SNode {

    int data;
    SNode* next;
};

int main() {

    // -------------------------
    // Class Based LL
    // -------------------------

    LinkedList list;

    list.insertRear(10);
    list.insertRear(20);
    list.insertRear(30);

    list.display();

    cout << endl;

    // -------------------------
    // Struct Based LL
    // -------------------------

    SNode* first = new SNode();
    SNode* second = new SNode();

    // Assign values
    first->data = 100;
    second->data = 200;

    // Linking
    first->next = second;
    second->next = nullptr;

    // Traversal
    SNode* temp = first;

    while(temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}