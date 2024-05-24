#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    vector <int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    bool found = false;
    for (int i=0; i<n; i++){
        if (v[i] == k){
            cout<<"yes"<<endl;
            found = true;
            break;
        }
    }
    if (!found) cout<<"no"<<endl;
}



int main(){
    int t;
    cin>>t;

    while (t--) solve();
}
