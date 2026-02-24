#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool perfect(int n){
   int i,sum=0;
   for(i=1;i<n;i++){
       if(n%i==0){
           sum+=i;
          
       }
   }
   return sum==n;
}
int main() {
   int n;
   cin>>n;
  cout<<perfect(n);
    return 0;
}
