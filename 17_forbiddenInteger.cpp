#include <bits/stdc++.h>
using namespace std;

void solve(){
   int n,k,x;
   cin>>n>>k>>x;

   if (x!=1){   // 1 ko abhi koi bhula nahi tab wo help karega sabki..
        cout<<"yes"<<endl;
        cout<<n<<endl;
        for (int i=0; i<n; i++) cout<<1<<" ";
        cout<<endl;
   }
    else{   // x = 1 rambaan missing tab thoda dimmag lagana hoga..
        if (k == 1) cout<<"no"<<endl;
        // ab neeche k>=2 ke cases fall karenge...

        else if ((n&1) == 0){ //  n is even
            cout<<"yes"<<endl;
            cout<<n/2<<endl;
            for (int i=0; i<n/2; i++) cout<<2<<" ";
            cout<<endl;
        }

        else if ((n&1) == 1){ // n is odd then it is compulsory ki k atleast 3 se help karwaye..
            if (k >= 3){
                cout<<"yes"<<endl;
                cout<<n/2<<endl;
                for (int i=0; i<n/2 - 1; i++) cout<<"2"<<" ";
                cout<<"3"<<endl;
            }
            else{
                cout<<"no"<<endl;
            }
        }
    }
}


int main(){
    int t;
    cin>>t;
    while(t--) solve();
}

/*
x is forbidden here...

if (x!=1) tab to balle balle
else{
    // abhi forbidden 1 hai...
    if (k==1) not possible
    else if (n is even){
        yes possible 
        2 2 2 2  2 n/2 times kar do..
    }
    else if (n is odd){
        2(p) + 1 , 1 ki help karne aayega 3 wala... 2(p-1) + 3

        if (k>=3) hogi tab hi kaam chal payega...
        iske else mai..game baj jayega not possible
    }
}




*/