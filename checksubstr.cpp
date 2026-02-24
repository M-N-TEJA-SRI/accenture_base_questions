#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, sub;
    getline(cin, s);
    getline(cin, sub);

    cout << (s.find(sub) != string::npos);

    return 0;
}
