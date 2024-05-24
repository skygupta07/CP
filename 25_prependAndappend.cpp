#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int i = 0;
    int j = s.length() - 1;

    if (s.length() == 0){
        cout<<0<<endl;
        return;
    }

    while ((i<=j) && (s[i] != s[j]) ){
        i++;
        j--;
    }
    cout<<j-i+1<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}