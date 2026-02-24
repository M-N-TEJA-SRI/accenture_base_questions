#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,i;
  cin>>n;
  unordered_map<int,int>mp;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
      mp[a[i]]++;
  }
  for(auto it:mp){
      cout<<it.first<<" "<<it.second<<"\n";
  }

}
