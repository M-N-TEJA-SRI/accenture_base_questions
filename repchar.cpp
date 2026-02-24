#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
 string s;
 getline(cin,s);
 int i;
 char ch1,ch2;
 cin>>ch1>>ch2;
 for(i=0;i<s.length();i++){
     if(s[i]==ch1)
     s[i]=ch2;
 }
 cout<<s;
    return 0;
}
