#include <bits/stdc++.h>
using namespace std;


void solve(){
    int n;
    cin>>n;

    int ans = 0;
    // int arr[] = {1,2,3,4,5,6,7,8,9};
    for (int power=0; power<6; power++){
        for (int i=1; i<=9; i++){
            int generatedNum = i*pow(10,power);

            if (generatedNum <= n) ans += 1;
            else {
                cout<<ans<<endl;
                return;
            }
        }
    }
    cout<<ans<<endl;
    return;
}






int main(){
    int t;
    cin>>t;

    while (t--){
        solve();
    }
}