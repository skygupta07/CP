#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector <int> v(n);
    int xorr = 0;
    int x = 0;
    
    for (int i=0; i<n; i++){
        cin>>v[i];
        xorr ^= v[i];
    } 

    
    if ((n&1) == 1){    // if n is odd then, x = xor of all elements..
        x = xorr;
    }
    else{   // n is even -> then if xorr comes out to be zero, then x can be arbitrary , else not possible...
        if (xorr == 0) x = 7;   // arbitrary number...
        else x = -1;
    }

    cout<<x<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}