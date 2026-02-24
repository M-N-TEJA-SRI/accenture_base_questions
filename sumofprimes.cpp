#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool prime(int n){
    int i;
    for(i=2;i*i<=n;i++){
        if(n%i==0)
        return false;
    }
    return true;
}
int main() {
 int l,r,i,sum=0;
 cin>>l>>r;
 for(i=l;i<=r;i++){
     sum+=prime(i)==true?i:0;
 }
 cout<<sum;
    return 0;
}
