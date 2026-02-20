#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n],maxi=INT_MIN;
    for(i=0;i<n;i++){
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    cout<<maxi;
    return 0;
}
