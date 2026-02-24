#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string decbin(int n){
   string s="";
   while(n){
       s+=(n%2==1)?'1':'0';
       n/=2;
   }
   reverse(s.begin(),s.end());
   return s;
}
int main() {
   int n;
   cin>>n;
  cout<<decbin(n);
    return 0;
}
