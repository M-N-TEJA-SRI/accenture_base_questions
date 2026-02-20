#include <bits/stdc++.h>
using namespace std;
int sum_digits(int n){
    int sum=0;
    while(n){
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int main() {
    int a;
    cin>>a;
   cout<<sum_digits(a);
    return 0;
}
