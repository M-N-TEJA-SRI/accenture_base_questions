// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool evenorodd(int n){
    return n%2==0?true:false;
}
int main() {
    int n;
    cin>>n;
    cout<<evenorodd(n);
    return 0;
}
