#include <bits/stdc++.h>

#define ll long long
int main()
{
    ll t, a, b, n;
    
    cin>>t;
    
    for(;t--;)
    {
        cin>>n>>a>>b;
        
        if(a==n && b==n){
            cout<<"YES\n";
        }else if(a+b<n-1){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
}

