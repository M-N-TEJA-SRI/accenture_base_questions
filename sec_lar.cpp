#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,i;
    cin>>n;
    int a[n],maxi=INT_MIN,sec=INT_MIN;
    for(i=0;i<n;i++){
        cin>>a[i];
       if(a[i]>maxi){
           sec=maxi;
           maxi=a[i];
       }
       else if(a[i]>sec&&a[i]!=maxi)
       sec=a[i];
    }
    if(sec==INT_MIN)
    sec=-1;
    cout<<sec;
    return 0;
}
