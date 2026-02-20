#include <bits/stdc++.h>
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
    int a,b;
    cin>>a>>b;
    int i;
    for(i=a;i<=b;i++){
    if(prime(i)==true)
    cout<<i<<"\n";
}
    return 0;
}
