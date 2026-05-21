#include<iostream>
#include<vector>
#include<queue>

using namespace std;


// Using class and Array/Vector 

class Queue{
    
    // Array and Variables used for queue.
    int arr[100];
    int front;
    int rear;
    int size;
    
public:

    // Define a constructor.
    
    /*
    So constructors help:

       initialize variables , allocate memory , set default values , ensure object starts safely
    
    */

    Queue(){

        front = -1;
        rear = -1;
        size = 99;
    }

    void enqueue(int val){
        if( rear == size ){
            cout<<"\nQueue Overflow\n";
            return;
        }
        if( front == -1 ){
            front = 0;
        }

        arr[++rear] = val;
    }

    int dequeue(){

        if( front == -1 || front > rear ) {
            cout << "Queue Underflow\n";
            return -1;
        }
        return arr[front++];
    }

    int peek() {

        if(front == -1 || front > rear) {
            cout << "Queue Empty\n";
            return -1;
        }

        return arr[front];
    }

    
   bool isEmpty() {
        return (front == -1 || front > rear);
    }
   
   
};


int main(){

    //Queue using STL { FIFO }

    /*
    1. push( element );
    2. pop();
    3. front(); 
    4. empty();
    5. size();
    6. back();
    
    */

    queue<int> q;

    // Insert
    q.push(10);
    q.push(20);
    q.push(30);

    // Front Element
    cout << "Front: " << q.front() << endl;

    // Rear Element
    cout << "Rear: " << q.back() << endl;

    // Remove
    q.pop();

    cout << "After Pop Front: " << q.front() << endl;

    // Size
    cout << "Size: " << q.size() << endl;

    // Empty Check
    if(q.empty()) {
        cout << "Queue Empty";
    }
    else {
        cout << "Queue Not Empty";
    }




    //Queue using Class and Array/Vector.



}