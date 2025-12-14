#include<bits/stdc++.h>
using namespace std;
int main(){
    int i , j , r , b , g;
    cin>>i;
    for(j=0;j<i;j++){
        cin>>r>>b>>g;
        int minimum=min(r,min(b,g));
        int max=minimum*10+(r-minimum)*3 + (b-minimum)*3 +(g-minimum)*3 ;
        cout<<max<<endl;
    }
    return 0;
}