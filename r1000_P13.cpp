// Problem: Chat room
// Platform: Codeforces
// Rating: 1000
// Link: https://codeforces.com/problemset/problem/58/A
// Solved: String, Loop, Condition

/*
A. Chat room
time limit per test1 second
memory limit per test256 megabytes
Vasya has recently learned to type and log on to the Internet. He immediately entered a chat room and decided to say hello to everybody. Vasya typed the word s. It is considered that Vasya managed to say hello if several letters can be deleted from the typed word so that it resulted in the word "hello". For example, if Vasya types the word "ahhellllloou", it will be considered that he said hello, and if he types "hlelo", it will be considered that Vasya got misunderstood and he didn't manage to say hello. Determine whether Vasya managed to say hello by the given word s.

Input
The first and only line contains the word s, which Vasya typed. This word consisits of small Latin letters, its length is no less that 1 and no more than 100 letters.

Output
If Vasya managed to say hello, print "YES", otherwise print "NO".

Examples
InputCopy
ahhellllloou
OutputCopy
YES
InputCopy
hlelo
OutputCopy
NO
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    // Taking input
    string s; cin >> s;

    int cnt = 0; bool flag = false;
    for(int i = 0; i < s.size(); i++) {
        if(cnt == 0 && s[i] == 'h') cnt++;
        else if(cnt == 1 && s[i] == 'e') cnt++;
        else if(cnt == 2 && s[i] == 'l') cnt++;
        else if(cnt == 3 && s[i] == 'l') cnt++;
        else if(cnt == 4 && s[i] == 'o') {
            flag = true;
            break;
        } 
    }

    if(flag == true) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}