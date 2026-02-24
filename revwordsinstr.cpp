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
 string s;
 getline(cin,s);
 reverse(s.begin(),s.end());
 int i;
 string sent="",word="";
 for(i=0;i<s.length();i++){
     if(s[i]!=' ')
     word+=s[i];
     else{
         reverse(word.begin(),word.end());
         sent+=' '+word;
         word="";
     }
 }
 if(word.length()>0){
     reverse(word.begin(),word.end());
         sent+=' '+word;
 }
 cout<<s.substr(0);
    return 0;
}
