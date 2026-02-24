#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int bindec(string s){
    int i,sum=0;
    for(i=s.length()-1;i>=0;i--){
        if(s[i]-'0'==1)
        sum+=pow(2,s.length()-i-1);
    }
    return sum;
}
int main() {
   string s;
   cin>>s;
  cout<<bindec(s);
    return 0;
}
