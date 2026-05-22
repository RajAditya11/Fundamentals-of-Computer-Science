#include<bits/stdc++.h>
using namespace std;

class Stack{

private:

    static const int MAX_SIZE = 100;

    int arr[MAX_SIZE];
    int topIndex;

public:

    Stack(){
        topIndex = -1;
    }

    //Push Operation
    void push( int value ){

        if( isFull() ){
            throw overflow_error("Stack Overflow");
        }

        arr[++topIndex] = value;
    }

    //Pop Operation
    int pop(){

        if( isEmpty()){
            throw underflow_error("Stack is Empty");
        }

        return arr[topIndex--];
    }

    //Peek / Top Operation
    int top() const{
        
        if( isEmpty()){

            // standard c++ exception class uses <stdexcept>
            throw underflow_error("Stack is Empty");
        }

        return arr[topIndex];
    }

    //Check Empty 
    bool isEmpty() const{

        return topIndex == -1;

    }

    //Check Full
    bool isFull() const{

        return topIndex == MAX_SIZE-1;

    }

    // Current Size
    int size() const{

        return topIndex + 1;

    }

    //Display Stack
    void display() const{

        if( isEmpty()){
            cout<< "Stack is Empty\n";
            return;
        }

        for( int i = topIndex; i >= 0; i-- ){
            cout<< arr[i]<< " ";
        }

        cout<<endl;
    }



};

int main(){
    
    Stack st;

    st.push(10);
    st.push(20);
    st.push(30);

    st.display();

    cout << "Top: " << st.top() << endl;

    cout << "Popped: " << st.pop() << endl;

    st.display();

    return 0;
}