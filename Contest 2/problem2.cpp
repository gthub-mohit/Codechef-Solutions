#include<iostream>
using namespace std;
int main(){
    int i , j , p , w , k;
    cin>>i;
    for (j=0;j<i;j++){
        cin>>w>>p>>k;
        int max;
        if (k==w)
        cout<<w*2<<endl;
        else if (k>w)
        cout<<w*2+(k-w)*1<<endl;
        else if (k<w)
        cout<<k*2<<endl;
        else
        cout<<0;
    }
}