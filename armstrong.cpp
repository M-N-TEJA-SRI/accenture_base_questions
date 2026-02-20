#include <bits/stdc++.h>
using namespace std;
bool arm(int n){
    int sum=0,length=log10(n)+1,temp=n;
    while(n){
        sum+=pow(n%10,length);
        n/=10;
    }
    return sum==temp;
}
int main() {
    int a;
    cin>>a;
   cout<<arm(a);
    return 0;
}
