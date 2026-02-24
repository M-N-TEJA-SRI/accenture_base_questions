#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool vowel(char ch){
    return ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U';
}
int main() {
   string s;
   getline(cin,s);
   int i,v=0;
   for(i=0;i<s.length();i++){
       if(vowel(s[i])==true)
       v++;
   }
   cout<<"vowels "<<v<<"\n";
   cout<<"consonant "<<s.length()-v;
    return 0;
}
