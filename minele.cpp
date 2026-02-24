#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {
   int n,i,mini=INT_MAX;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
       mini=min(mini,a[i]);
   }
   cout<<mini;
    return 0;
}
