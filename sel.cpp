#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,min;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
 for(i=0;i<n;i++){
     min=i;
        for(j=i+1;j<n;j++){
            if(a[min]>a[j])
           min=j;
        }
        if(min!=i)
        swap(a[i],a[min]);
    }
     for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
