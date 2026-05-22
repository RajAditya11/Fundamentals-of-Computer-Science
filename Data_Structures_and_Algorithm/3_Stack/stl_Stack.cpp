#include<bits/stdc++.h>
#include<stack>
using namespace std;

int main(){

    stack<int> stk;

    stk.push( 5 );
    stk.push( 6 );
    stk.push( 7 );
    stk.push( 8 );
    stk.pop();
    stk.pop();

    bool isEmpty = stk.empty();

    int size = stk.size();

    int top = stk.top();

    while( !stk.empty()){
        cout<< stk.top() << " ";

        stk.pop();
    }
    
    return 0;
}