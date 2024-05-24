#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n,k;
    cin>>n>>k;

    // 2x + ky = n 
    // if the number is even i am always able to represent by keeping y = 0;
    // in case if n is odd then 2x contribution is even so k has to be odd to maintain the sum odd...

    if (n%2 == 0) cout<<"yes"<<endl;
    else{
        if ((k % 2) != 0) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

/*
odd even properties 

sum properties 

o + o = e
e + e = e
o + e = o (theek thak mai even tha magar abhi kucch odd aake mujse jud ke apni g** ***** lagenge..)

multiplication properties

o.o = o
e.e = e
o.e = e (itne times even kar diya to bhi to even hi raha )

matlab odd odd ko plus karne par to even aata hai par multiply karne par odd aajata hai..



*/