#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector <int> v(n);  
    for (int i=0; i<n; i++)  cin>>v[i];

    bool found = false;

    for (int i=0; i<n-1; i++){
        for (int j=i+1; j<n; j++){
            if (__gcd(v[i] , v[j]) <=2){
                found = true;
                break;
            }
        }
    } 
    if (!found) cout<<"no"<<endl;
    else cout<<"yes"<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}




/*
no more than matlab => less than equal to....
no less than matlab => greater than equal to....


gcd (a,b) <= min(a,b)
gcd (a,b,c) <= min(a,b,c)

====> gcd(a,b,c) <= gcd(a,b)            -> lalach buri bala property
    matlab aur number ko include kiya...and then gcd liya to gcd ghatega hi ya purane wale 
    ke barabar rahega .... ye kabhi bhi increase nahi kar jaega...

    mere ko yaha reorder karna hai... kucch is tarah se ki wo beautiful ban jaye...

    simply wo pair find kiya.. jiska gcd<=2  hai usko a1, a2 banaya and then aage ke element 
    kucch bhi wo who cares ..wo apne aap hi set ho jaenge by lalach buri bala property

*/