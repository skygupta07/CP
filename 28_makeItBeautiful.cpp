#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    // element mujhe yaha sorted form mai de raha hai...uska use kiya..
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }
    int mini = arr[0];
    int maxi = arr[n-1];

    if (mini == maxi) cout<<"no"<<endl;
    else{
        cout<<"yes"<<endl;
        cout<<maxi<<" "<<mini<<" ";

        for (int i=1; i<n-1; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    
    while (t--) solve();
}


/*
jo cheej boli jaa rahi hai wo ekdum to pura implement cp mai karna hi nahi hota...
bas tum crux ya constraints jaisi trick se kucch kucch conclusion nikalo....

yaha agar pehla element hi max element rakh diya... and second element koi bhi (say smallest element but not equal to largest element)
rakh diya then aage chahe kisi bhi order mai element rakho phark nahi padega....

*/