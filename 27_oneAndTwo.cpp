#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;

        ll b;
        ll one = 0;
        ll two = 0;

        vector <ll> v;

        for (ll i=0; i<n; i++){
            cin>>b;

            if (b==1) one++;
            else{
                two++;
                v.push_back(i+1);
            }
        }

        
        // if (two %2 == 1){   // number of two's are odd
        //     cout<<-1<<endl;
        // }

        // even odd check karne ke liye to sabse best hota hai bit manipulation.....
        if (two & 1) cout<<-1<<endl;
        else{   // number of two's are even...

            if (two == 0) cout<<1<<endl;    // means all are 1...
            else{
                ll si = v.size()/2;
                si--;
                cout<<v[si]<<endl;
            }
        }  
    }
    return 0;
}


// matlab input wale ko to array mai lene ki jarurat hi nahi...