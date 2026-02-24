#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void index(int *a,int n,vector<int>&v,int key){
    int sum,i=0,j=n-1;
    while(i<j){
        sum=a[i]+a[j];
        if(sum==key)
        {
            v.push_back(i);
            v.push_back(j);
            return;
        }
        else if(sum>key)
        j--;
        else
        i++;
    }
    
}
int main() {
  int n,key,i;
  cin>>n>>key;
  int a[n];
  for(i=0;i<n;i++){
      cin>>a[i];
  }
  vector<int>v;
  index(a,n,v,key);
  if(v.empty()==true){
      v.push_back(-1);
      v.push_back(-1);
  }
  cout<<v[0]<<" "<<v[1];

    return 0;
}
