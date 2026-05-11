// Problem: String Task
// Platform: Codeforces
// Rating: 1000
// Link: https://codeforces.com/contest/118/problem/A
// Solved: String, Loop, Function, Condition

/*
A. String Task
time limit per test2 seconds
memory limit per test256 megabytes
Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

deletes all the vowels,
inserts a character "." before each consonant,
replaces all uppercase consonants with corresponding lowercase ones.
Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

Input
The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

Output
Print the resulting string. It is guaranteed that this string is not empty.

Examples
InputCopy
tour
OutputCopy
.t.r
InputCopy
Codeforces
OutputCopy
.c.d.f.r.c.s
InputCopy
aBAcAba
OutputCopy
.b.c.b
*/

#include <bits/stdc++.h>
using namespace std;

bool checkingVowels(char c) {
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y') {
            return true;
    }

    else return false;
}

bool isCapital(char c) {
    if(c >= 'A' && c <= 'Z') return true;
    else return false;
}

int main() {
    // Taking input
    string word; cin >> word;
    string newWord;


    for(int i = 0; i < word.size(); i++) {
        if(!checkingVowels(word[i])) {
            // Inserting (.) before
            newWord.push_back('.');

            // Letter to push
            char letter = word[i];

            // Converting letter to smaller letter
            if(isCapital(word[i])) letter = (word[i] - 'A') + 'a';
            
            // Pushing letter into last of the string
            newWord.push_back(letter);
        }
    }

    // Output
    cout << newWord << endl;

    return 0;
}