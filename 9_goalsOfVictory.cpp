#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int score;
    int sum = 0;
    for (int i=0; i<n-1; i++){
        cin>>score;
        sum += score;
    }
    cout<<-sum<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}