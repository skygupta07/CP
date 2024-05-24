#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define ll long long

int main(){
    int t;
    cin>>t;

    while (t--){
        ll n, b, temp = 0, maxi = 0;
        cin>>n;

        for (ll i=0; i<n; i++){
            cin>>b;

            if (b==1) temp = 0; // streak tut gayi...
            else{
                temp++;
                maxi = max(maxi, temp);
            }
        }
        cout<<maxi<<endl;
    }
}

// tujhe pata hai har testcase ke liye t,n,b sab alag alag hoga...