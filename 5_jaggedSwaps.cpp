#include <bits/stdc++.h>
using namespace std;

// agar sabse pehla element sabse chota hai to print yes else print no

void solve(){
    int n;
    cin>>n;

    vector <int> p(n);  // permutation
    for (int i=0; i<n; i++){
        cin>>p[i];
    }

    int mini = INT_MAX;
    for (int i=0; i<n; i++){
        mini = min(mini, p[i]);
    }

    if (mini == p[0]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
}



int main(){
    int t;
    cin>>t;
    while (t--){
        solve();
    }
}