#include <bits/stdc++.h>
using namespace std;
void rev(int *a,int i,int j){
    if(i<j){
        swap(a[i++],a[j--]);
        rev(a,i,j);
    }
}
int main() {
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    rev(a,0,n-1);
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
