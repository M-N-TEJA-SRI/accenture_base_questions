// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
    if(a==0)
    return b;
    else if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
int main() {
    int a,b;
    cin>>a>>b;
    cout<<(a*b)/gcd(a,b);
    return 0;
}
