#include<bits/stdc++.h>
using namespace std;

bool isSubsequence(string s, string t)
{
    int idx = 0;

    for( int i = 0 ; i < t.size() ; i++ ){
        if( t[i] == s[idx] ){
            idx++;
        }
    }

    return idx == s.size();
}

int main(){

    string s = "abc", t = "ahbgdc";

    bool state = isSubsequence( s , t );

    cout<<state;

    return 0;
}