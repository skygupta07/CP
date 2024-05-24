#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int mini = INT_MAX;
    int maxi = INT_MIN;

    vector <int> a(n);
    for (int i=0; i<n; i++) {
        cin>>a[i];

        mini = min(mini, a[i]);
        maxi = max(maxi , a[i]);
    }

    int magicSum = mini + maxi;
    // bas sabko magicSum ke hi equal banana hai...

    for (int i=0; i<n; i++){
        cout<<magicSum-a[i]<<" ";
    }
    cout<<endl;

    // less than equal to inequality mai kya mai equality laga ke hi bas upar upar se nahi
    // kar sakta kya.....
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}