#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void revstr(string &s,int i,int j){
    if(i<j){
        swap(s[i++],s[j--]);
        revstr(s,i,j);
    }
}
int main() {
   string s;
   getline(cin,s);
   revstr(s,0,s.length()-1);
   cout<<s;
    return 0;
}
