#include<bits/stdc++.h>
using namespace std;
bool bin_search(int *a,int n,int key){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid=(l+h)/2;
        if(a[mid]==key)
        return true;
        else if(a[mid]>key)
        h=mid-1;
        else
        l=mid+1;
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
    cout<<bin_search(a,n,key);
}
