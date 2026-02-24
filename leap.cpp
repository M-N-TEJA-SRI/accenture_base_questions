// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
string leapornot(int n){
    return (n%4==0&&n%100!=0||n%400==0)?"leap":"not leap";
    
}
int main() {
   int n;
   cin>>n;
   cout<<leapornot(n);
    return 0;
}
