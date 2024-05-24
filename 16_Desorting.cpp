#include <bits/stdc++.h>
using namespace std;


void solve(){
    int diff = INT_MAX;
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i=0; i<n; i++) cin>>v[i];

    if (!(is_sorted(v.begin(), v.end()))){
        cout<<"0"<<endl;
        return;
    }
    else{   // sorted wale case mai... kaise desort kare...
            // break the inequality between closest element....
        for (int i=1; i<n; i++){
            diff = min( diff, v[i]-v[i-1]);
        }

        int opsReq = diff/2 + 1;
        cout<<opsReq<<endl;
    }


    // ye min difference wala hi index yaad rakhna hai...
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}