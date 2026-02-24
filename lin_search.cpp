#include<bits/stdc++.h>
using namespace std;
bool lin_search(int *a,int n,int key){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key)
        return true;
    }
    return false;
}
int main(){
    int n,i,key;
    cin>>n>>key;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<lin_search(a,n,key);
}
