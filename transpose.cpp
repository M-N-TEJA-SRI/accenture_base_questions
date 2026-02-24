#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m,i,j;
   cin>>n>>m;
   int a[n][m],b[m][n];
   for(i=0;i<n;i++){
       for(j=0;j<m;j++){
           cin>>a[i][j];
           b[j][i]=a[i][j];
       }
   }
   for(i=0;i<m;i++){
       for(j=0;j<n;j++){
           cout<<b[i][j]<<" ";
       }
       cout<<"\n";
   }

}
