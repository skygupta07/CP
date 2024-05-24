#include <bits/stdc++.h>
#include <string>
#include <iostream>
using namespace std;



void solve(){
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;

        string s;
        cin>>s;

        int dc = 0;
        bool flag = true;

        for (int i=0; i<n; i++){
            if (s[i] == '.') dc++;  

            if (i>0 && i<n-1){
                if (s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){   // wow confign.
                    cout<<2<<endl;
                    flag = false;
                    break;
                }
            }
        }
        if (flag) cout<<dc<<endl;
    }
}

int main(){
    solve();
}