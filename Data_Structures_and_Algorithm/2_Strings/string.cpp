#include <bits/stdc++.h>
using namespace std;

class StringUtil {

public:

    static bool isPalindrome(const string& str) {

        int left = 0;
        int right = str.length() - 1;

        while(left < right) {

            if(str[left] != str[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }

    static string reverseString(string str) {

        reverse(str.begin(), str.end());

        return str;
    }

    static unordered_map<char, int>
    frequencyCount(const string& str) {

        unordered_map<char, int> freq;

        for(char ch : str) {
            freq[ch]++;
        }

        return freq;
    }
};

int main() {

    cout << StringUtil::isPalindrome("madam") << endl;

    cout << StringUtil::reverseString("google") << endl;
}