#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>

using namespace std;

bool can_form_palindrome(const string& s) {
    unordered_map<char, int> char_frequencies;
    for (char c : s) {
        ++char_frequencies[c];
    }

    int odd_frequency_count = 0;
    return none_of(begin(char_frequencies), end(char_frequencies),
        [&odd_frequency_count](const auto& p) {
            return (p.second % 2) && ++odd_frequency_count > 1;
        });
}

int main() {
    string s = "civic";
    if (can_form_palindrome(s)) {
        cout << "The string can be permuted to form a palindrome." << endl;
    } else {
        cout << "The string cannot be permuted to form a palindrome." << endl;
    }
    return 0;
}
