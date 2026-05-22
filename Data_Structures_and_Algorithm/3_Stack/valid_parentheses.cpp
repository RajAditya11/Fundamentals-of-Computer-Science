#include<bits/stdc++.h>
using namespace std;

bool checkValidParentheses( string pare ){

    stack< char >record;

    int i = 0;
    while( i < pare.length() ){

        if( record.top() == '{' && pare[i] == '}' || 
            record.top() == '(' && pare[i] == ')' || 
            record.top() == '[' && pare[i] == ']'    )
        {

            record.pop();

        }else{
            record.push( pare[i] );
        }
    }

    if( record.size() ){
        return false;
    }else{
        return true;
    }
};

int main(){

    string s1 = " {{{{({)}}}}" , s2 = "{{{{({[]})}}}}";

    bool firstString = checkValidParentheses( s1 );
    bool secondString = checkValidParentheses( s2 );

    cout<<"First Parentheses is "<<firstString;
    cout<<"\nSecond Parentheses is "<<secondString;

    return 0;
}