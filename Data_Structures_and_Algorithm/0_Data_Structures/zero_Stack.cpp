#include<iostream>
#include<vector>
#include<stack>

using namespace std;


// Using class and Array/Vector 

class Stack{
    
    // Array and Variables used for stack.
    int arr[100];
    int top;
    int size;
    
public:

    // Define a constructor.
    
    /*
    So constructors help:

       initialize variables
       allocate memory
       set default values
       ensure object starts safely
    
    */

    Stack(){
        top = -1;
        size = 99;
    }

    void push(int val){
        if( top == size ){
            cout<<"\nStack Overflow\n";
        }

        arr[++top] = val;
    }

    int pop(){
        if(top == -1) {
            cout << "Stack Underflow\n";
            return -1;
        }
        return arr[top--];
    }

    int peek(){
        if(top == -1) {
            cout << "Stack Empty\n";
            return -1;
        }

        return arr[top];
    }

   bool isEmpty(){
       return top == -1;
   }
   
   
};


int main(){

    //Stack using STL { LIFO }

    /*
    1. push( element );
    2. pop();
    3. top(); 
    4. empty();
    5. size();
    
    */

    stack<int> stack_STL;

    stack_STL.push( 6 );
    stack_STL.push( 5 );
    stack_STL.pop();
    stack_STL.top();
    stack_STL.size();

    bool isEmpty = stack_STL.empty();


    
    //Class object of Stack

    Stack s;

    s.push(5);
    s.push(10);
    s.push(15);

    cout << "Top: " << s.peek() << endl;

    s.pop();

    cout << "After Pop: " << s.peek() << endl;

    return 0;

}