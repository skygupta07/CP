#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector <int> v(n);
    for(int i=0; i<n; i++) cin>>v[i];

    int minusOneCount = 0;
    int plusOneCount  = 0;

    for (int i=0; i<n; i++){
        if (v[i] == -1) minusOneCount++;
        else plusOneCount++;
    }

    int ops = 0;
    if ((minusOneCount & 1) == 0){  // minusOneCount is even ....
        while (minusOneCount > plusOneCount){
            ops += 2;
            minusOneCount -= 2;
            plusOneCount += 2;
        }
    }
    else{
        minusOneCount--;
        plusOneCount++;
        ops++;
        while (minusOneCount > plusOneCount){
            ops += 2;
            minusOneCount -= 2;
            plusOneCount += 2;
        } 
    }
    cout<<ops<<endl;
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}