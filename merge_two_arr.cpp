#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
   int n,m,i,j;
   cin>>n>>m;
   int a[n],b[m];
   vector<int>v;
   for(i=0;i<n;i++){
       cin>>a[i];
   }
   for(i=0;i<m;i++){
       cin>>b[i];
   }
   i=0,j=0;
   while(i<n&&j<m){
       if(a[i]<b[j])
       i++;
       else if(b[j]<a[i])
       j++;
       else
       {
           v.push_back(a[i++]);
           j++;
       }
   }
   for(auto it:v){
       cout<<it<<" ";
   }

    return 0;
}
