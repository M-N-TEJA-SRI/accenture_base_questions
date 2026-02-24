#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int power(int a,int b){
    int i,pro=1;
    for(i=1;i<=b;i++){
        pro*=a;
    }
    return pro;
}
int main() {
   int a,b;
   cin>>a>>b;
   cout<<power(a,b);
    return 0;
}
