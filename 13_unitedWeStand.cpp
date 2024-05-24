#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    
    unordered_map <int, int> mp;
    vector <int> v(n);
    for (int i=0; i<n; i++){
        cin>>v[i];
        mp[v[i]]++;
    }

    if (mp.size() == 1){
        cout<<-1<<endl;
        return;
    }

    // if all elements are same then return -1
    // else put all the maximum element into vector c and remaining element in vector b...

    vector <int> b;
    vector <int> c;

    int maxi = INT_MIN;
    for (int i=0; i<n; i++){
        maxi = max(maxi, v[i]);
    }

    for(int i=0; i<n; i++){
        if (v[i] != maxi) b.push_back(v[i]);
        else c.push_back(v[i]);
    }

    cout<<b.size()<<endl;
    cout<<c.size()<<endl;

    for (int i=0; i<b.size(); i++) cout<<b[i]<<" ";
    cout<<endl;
    for (int i=0; i<c.size(); i++) cout<<c[i]<<" ";
    cout<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}