#include <bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    // if raasan ka qota is even then quota khatam hone par dubara anna ki hi baari aayegi ..n
    // and tab usey jitne ke liye... apna ghar ka raasan a > b karna hoga....
    if ((c&1) == 0){
        // ana turns now...
        if (a > b) cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    else{
        // katie's turn now
        if (b>a) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}