#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector <int> v(n);
    int sum = 0;
    for (int i=0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    } 
    if ((sum&1) == 0) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}