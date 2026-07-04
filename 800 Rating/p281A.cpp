// Problem: Word Capitalization
// Platform: Codeforces
// Rating: 800
// Link: https://codeforces.com/problemset/problem/281/A
// Solved: String, toupper()
/*
A. Word Capitalization
time limit per test2 seconds
memory limit per test256 megabytes
Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.

Input
A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.

Output
Output the given word after capitalization.

Examples
InputCopy
ApPLe
OutputCopy
ApPLe
InputCopy
konjac
OutputCopy
Konjac
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; cin >> s;
    s[0] = toupper(s[0]);

    // Printing
    cout << s << endl;

    return 0;
}