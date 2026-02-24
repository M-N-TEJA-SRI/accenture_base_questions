#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    return n<2?1:n*fact(n-1);
}
bool strong(int n){
    int sum=0,temp=n;
    while(n){
        sum+=fact(n%10);
        n/=10;
    }
    return sum==temp;
}
int main() {
   int n;
   cin>>n;
  cout<<strong(n);
    return 0;
}
