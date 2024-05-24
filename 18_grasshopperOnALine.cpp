#include <bits/stdc++.h>
using namespace std;

void solve(){
    int x,k;
    cin>>x>>k;

    // if x(final destination) is not divisible by k, then make 1 jump of size x itself.
    // if x is divisible by k then x-1 will not be divisible by k , so make jump first of x-1 then jump of 1..
    

    if (x%k != 0){
        cout<<"1"<<endl;
        cout<<x<<endl;
    }
    else{
        cout<<"2"<<endl;
        cout<<x-1<<" "<<"1"<<endl;
    }
    return;
}




int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}