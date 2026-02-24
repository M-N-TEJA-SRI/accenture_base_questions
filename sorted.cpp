#include<bits/stdc++.h>
using namespace std;
bool sorted(int *a,int n){
    int i;
    for(i=1;i<n;i++){
        if(a[i]<a[i-1])
        return false;
    }
    return true;
}
int main(){
  int n,i;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  cout<<sorted(a,n);
}
