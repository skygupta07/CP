#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int g[n];   // gas array
    for (int i=0; i<n; i++){
        cin>>g[i];
    }

    int ans = INT_MIN;

    int last = 0;
    for (int i=0; i<n; i++){  // second last gas station tak loop chalaya
        ans = max(ans,g[i] - last);   // pehli baar mai zero ghatega then neeche update ho jaega last wala 
                                    // equal to current g[i] issey g[i+1] - g[i] ho raha hai ek tarah se..
        last = g[i];
    }

    ans = max(ans, 2*(x - last)); // try replacing g[n-1] with last 

    cout<<ans<<endl;
}


int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
}