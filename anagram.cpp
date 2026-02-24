#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool anagram(string s,string t){
    if(s.length()!=t.length())
    return false;
    else{
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]!=t[i])
        return false;
    }
    return true;
    }
    return true;
}
int main() {
   string s,t;
   getline(cin,s);
   getline(cin,t);
   cout<<anagram(s,t);
    return 0;
}
