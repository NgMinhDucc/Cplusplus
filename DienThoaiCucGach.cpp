#include <iostream>
#include <string>
#include <unordered_map>
#include <cctype> // for toupper
using namespace std;

bool isPalindromeMapped(const string& message) {
    unordered_map<char, char> charToKey = {
        {'A','2'}, {'B','2'}, {'C','2'},
        {'D','3'}, {'E','3'}, {'F','3'},
        {'G','4'}, {'H','4'}, {'I','4'},
        {'J','5'}, {'K','5'}, {'L','5'},
        {'M','6'}, {'N','6'}, {'O','6'},
        {'P','7'}, {'Q','7'}, {'R','7'}, {'S','7'},
        {'T','8'}, {'U','8'}, {'V','8'},
        {'W','9'}, {'X','9'}, {'Y','9'}, {'Z','9'}
    };

    string numericSequence;
    for (char ch : message) {
        if (isalpha(ch)) {
            ch = toupper(ch);
            numericSequence += charToKey[ch];
        }
    }

    // Check if numericSequence is a palindrome
    int n = numericSequence.size();
    for (int i = 0; i < n / 2; ++i) {
        if (numericSequence[i] != numericSequence[n - 1 - i])
            return false;
    }

    return true;
}

int main() {
    int test;
    cin >> test;
    while (test--){
        string input;
        cin >> input;

        if (isPalindromeMapped(input))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
