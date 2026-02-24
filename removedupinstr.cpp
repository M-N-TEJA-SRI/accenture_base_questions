#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, ans = "";
    getline(cin, s);

    vector<int> lwr(26, -1);

    for(int i = 0; i < s.length(); i++) {
        char temp = s[i];

        // Convert to lowercase for checking
        char ch = s[i];
        if(ch >= 'A' && ch <= 'Z')
            ch += 32;

        // Check only if alphabet
        if(ch >= 'a' && ch <= 'z') {
            int index = ch - 'a';

            if(lwr[index] == -1) {
                ans += temp;      // Keep original case
                lwr[index] = 1;
            }
        }
    }

    cout << ans;
    return 0;
}
