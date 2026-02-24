#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,i,e=0,o=0;
   cin>>n;
   int a[n];
   for(i=0;i<n;i++){
       cin>>a[i];
       a[i]%2==0?e+=1:o+=1;
   }
   cout<<e<<" "<<o;
    return 0;
}
