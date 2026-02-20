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
    int n;
    cin>>n;
    cout<<prime(n);

    return 0;
}
