#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve(){
    ll n;
    cin>>n;
    vector <int> arr(n);
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    // array mai single loop se iterate kara ... agar single hi element hai (chahe bheed mai ho)tab to wo 
    // apna good ka contribution de raha hai... and agar lagatar say m consecutive odd element mil gaye to
    // m-1 operation karke usko single odd number banana padega...
    // j ko starting mai hi fix kar diya and i ko aage aage badhaya .....
    // i ki jab condition false hui hogi tab wo bahar nikla hoga but ek increment hoke bahar nikla hoga..
    // so i-j elements honge jinki parity same hogi .... 1 minus kara number of operations ke liye...

    int ops = 0;
    for (int i=0; i<n-1; i++){
        if ((arr[i]%2) == (arr[i+1]%2)) ops++;
    }
    cout<<ops<<endl;
}



int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

// odd * odd = odd
// even * even = even

/*
if you have runs of odd or even greater than 1 then there is problem...


....... in simple words if two adjacent elements have same parity then one operation will be consumed...

*/