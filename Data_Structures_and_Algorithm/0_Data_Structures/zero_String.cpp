#include <iostream>
#include <string>

using namespace std;

//String is a Class in Modern C++

int main(){
    //Define string using C style old

    char str[50] = "Raj Aditya works at Google.";
    // Memory : R a j A d i t y a _ w o r k s _ a t _ G o o g l e .\0
    // \0 = Null character
    // Total size allocated : 50
    // Total size used : 27

    string name = "Raj";

    cout<<name;


    // to take input of a string with spaces.

    string line ;

    /*GETLINE */

    // getline(input_stream, string_variable);
    getline( cin , line );


    /*GETLINE WITH DELIMITER*/

    // getline(input_stream, string_variable, delimiter);
    string s;

    getline(cin, s, '.');

    /* Common Delimiter are :

    - '\n'     NewLine               {Default}
    - ','      CSV parsing
    - '.'      Stop at dot
    
    */



    return 0;
}