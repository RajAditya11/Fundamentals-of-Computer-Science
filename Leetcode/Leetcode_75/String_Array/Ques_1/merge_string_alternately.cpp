#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2) {
    string result = "";

    int i = 0 , j = 0;
    while( i < word1.length() && j < word2.length() ){

        result += word1[i++];
        result += word2[j++];
    }

    if( j != word2.length() ){
        while( j < word2.length()){
            result += word2[j++];
        }
    }

    if( i != word1.length() ){
        while( i < word1.length()){
            result += word1[i++];
        }
    }

    return result;
}

int main(){
    string word1 = "abc", word2 = "pqrasd";

    string result_String = mergeAlternately( word1 , word2 );

    cout<<"Merged Alternately String :"<<result_String;

    return 0;

}