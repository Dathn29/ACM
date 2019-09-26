#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll n,m,dem;
    cin>>n>>m;
    ll t[m];
    vector<ll> add(n);
    vector<ll>::iterator up;
    for(int i=0;i<n;i++){
        cin>>add[i];
    }
    for(int i=0;i<m;i++){
        cin>>t[i];
    }
    sort(add.begin(),add.end());
    for(int i=0;i<m;i++){
        up=upper_bound(add.begin(),add.end(),t[i]);
        if(up==add.begin()){
           cout<<"-1\n";
            continue;
        }
        dem=ll(up-add.begin());
        dem--;
        cout<<add[dem]<<endl;
        add.erase(add.begin()+dem,add.begin()+dem+1);
    }
    return 0;
}