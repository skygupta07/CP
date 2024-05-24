#include <bits/stdc++.h>
#include <map>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i=0; i<n; i++) cin>>arr[i];

    unordered_map <int,int> mp;
    for (int i=0; i<n; i++) mp[arr[i]]++;

    if (mp.size() == 1) cout<<"yes"<<endl;
    else if (mp.size() == 2){
        int f1 = begin(mp)->second;
        if (f1 != n/2 && f1 != (n+1)/2) cout<<"no"<<endl;
        else cout<<"yes"<<endl;
    }
    else if (mp.size() > 2) cout<<"no"<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--) solve();
}