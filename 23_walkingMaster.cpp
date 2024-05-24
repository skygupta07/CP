#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long a,b,c,d;
    cin>>a>>b>>c>>d;

    long long xDirnExpense = 0;
    long long yDirnExpense = 0;

    if (d<b){
        cout<<-1<<endl;
        return;
    }
    else{
        if (a+d-b < c){
            cout<<-1<<endl;
        }
        else{
            xDirnExpense = a+d-b - c;
            yDirnExpense = d-b;
            cout<< xDirnExpense + yDirnExpense <<endl;
        }
    }
    
}


int main(){
    int t;
    cin>>t;
    while (t--) solve();
}


// obviously you can't go down...
/*
source a,b
destination c,d

if destn lies below source i.e. d<b  then print -1
else first try to reach the height d, then left left hoke x bhi pahuch jaana...
agar y height pahucha and dekha ki us time x aapka right side hai ...tab bhi bhaiya not possible..


height d par pahucha to mera x cordinate bhi to change hoga... pehle x coordinate a tha..
now a+d-b hogaya...
*/