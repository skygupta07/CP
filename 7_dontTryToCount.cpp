#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;

    string x;
    cin>>x;

    string s;
    cin>>s;

    bool found = false;
    for (int ops=0; ops<=5; ops++){
        if(x.find(s) != string :: npos){
            cout<<ops<<endl;
            found = true;
            break;
        }
        // apply operation 
        x.append(x);
    }
    if (!found) cout<<-1<<endl;
}



int main(){
    int t;
    cin>>t;
    while(t--) solve();
}





/*
x.find(s): The find method is used to search for the substring s within the string x.
If s is found within x, find returns the starting index (position) of the first occurrence of s in x.

If s is not found within x, find returns a special constant value string::npos (which stands for "not position").

!= string::npos: This condition checks whether the result of x.find(s) is not equal to string::npos.
If x.find(s) is not string::npos, it means that s was found somewhere within x.

If x.find(s) is equal to string::npos, it means that s was not found in x.

*/



/*
constraints hi aisa diya tha and if you are multiplying by 2 at each step then you will 
cross the 25 char limit in the 5 steps only so 0 se 5 tak loop chalaya....
and even after 5 operation the string x doesn't contain the string s as a substring in it...
then we will print -1....

string s ko string x mai find karne ke liye inbuilt find function ka use kiya...

*/