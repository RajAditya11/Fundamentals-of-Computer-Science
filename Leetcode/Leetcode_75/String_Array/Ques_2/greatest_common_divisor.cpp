#include<bits/stdc++.h>
#include <numeric>
using namespace std;

string gcdOfStrings(string str1, string str2){
    if( str1 + str2 != str2 + str1 ) return "";

    int idx = gcd( str1.length() , str2.length() );

    return str1.substr( 0 , idx );
};

int main(){

    string str1 = "ABCABC", str2 = "ABC";

    gcdOfStrings( str1 , str2 );

    return 0;
}